/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yaaktas <yaaktas@student.42istanbul.com.t  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/28 15:45:51 by yaaktas           #+#    #+#             */
/*   Updated: 2022/07/02 01:47:57 by yaaktas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include<unistd.h>
#include<stdlib.h>
#include<stdio.h>
#include<sys/types.h>
#include<sys/stat.h>
#include <fcntl.h>*/

//#include "get_next_line.h"

#include<unistd.h>
#include<stdlib.h>
#include<stdio.h>
#include<string.h>
#include<sys/types.h>
#include<sys/stat.h>
#include<fcntl.h>

size_t    ft_strlen(const char *str)
{
    size_t    index;

    index = 0;
    while (str[index])
        index++;
    return (index);
}

char    *ft_strjoin(char const *s1, char const *s2, char *new_str)
{
    //char    *new_str;
    int        index;
    int        index2;

    if (!s1 && !s2)
        return (0);
    /*new_str = (char *)malloc(ft_strlen(s1) + ft_strlen(s2) + 1);
    if (!new_str)
        return (0);*/
    index = 0;
    while (s1[index])
    {
        new_str[index] = s1[index];
        index++;
    }
    index2 = 0;
    while (s2[index2])
    {
        new_str[index] = s2[index2];
        index++;
        index2++;
    }
    new_str[index] = '\0';

    //memcpy((void *)s1,new_str,ft_strlen(new_str));
    //free(new_str);
    //return ((char *)s1);

    //free s1 olabilir burada
    //free((void *)s1);
    return (new_str);
}

char    *ft_substr(char const *s, unsigned int start, size_t len, char *sub_str)
{
    size_t    index;

    if (!s)
        return (0);
    if (ft_strlen(s) - start < len)
        len = ft_strlen(s) - start;
    sub_str = (char *)malloc(len + 1);
    if (!sub_str)
        return (0);
    if (ft_strlen(s) < start)
    {
        sub_str[0] = '\0';
        return (sub_str);
    }
    index = 0;
    while (index < len && s[start])
    {
        sub_str[index] = s[start];
        index++;
        start++;
    }
    sub_str[len] = '\0';
    return (sub_str);
}

size_t    read_more(int fd, char *buffer)
{
    size_t    length;

    length = read(fd, buffer, BUFFER_SIZE);
	if (length > 0)
		buffer[length] = 0;
    return (length);
}

int    nl_index(char *str)
{
    int    index;

    index = 0;
    while (str[index])
    {
        if (str[index] == '\n')
            return (index);
        index++;
    }
    return (-1);
}

int    control_str(char *str)
{
    if (ft_strlen(str) == 0)
        return (-1);
    return (nl_index(str));
}

void	move(char *str)
{
	int	len;
	int	nl_idx;

	len = strlen(str);
	nl_idx = nl_index(str);
	if (nl_idx == -1)
		*str = 0;
	else
	{
		memmove(str, str + nl_idx + 1, len - nl_idx + 1);
		str[len - nl_idx] = 0;
	}
}

char    *get_next_line(int fd)
{
    static char    *str;
	char	*buffer;
    char     *line;
    char	*return_line;
    char	*new_str;
    int    length;
   
    if (BUFFER_SIZE <= 0)
        return (0);
	/*if (fd < 0)
		return (0);*/
	if (read(fd, &length, 0) == -1)
		return (0);
    length = -1;
	buffer = (char *)malloc(sizeof(char) * (BUFFER_SIZE + 1));
    if (!str)
	{
        str = (char *)malloc(1);
		//*str = 0;
	}
    while (control_str(str) < 0)
    {
        length = read_more(fd, buffer);
		/*if (length < 0)
		{
			free(buffer);
			free(str);
			return (0);
		}*/
		if (!length)
		{
			if (*str == 0)
			{
				free(str);
				free(buffer);
				str = 0;
				return (0);
			}
			break ;
		}
       	new_str = (char *)malloc((ft_strlen(str) + length + 1) * sizeof(char));
		//*new_str = 0;
        new_str = ft_strjoin(str, buffer, new_str);
        free(str);
        str = (char *)calloc((ft_strlen(new_str) + 1) , sizeof(char));
        str = memcpy((void *)str, (void *)new_str, ft_strlen(new_str));
		//str[ft_strlen(new_str)] = 0;
        free(new_str);
		/*if (length < BUFFER_SIZE)
			break;*/
	}
	free(buffer);
   	/*if (ft_strlen(str) == 0)
	{
		free (str);
		return (0);
	}*/
    //if (length < BUFFER_SIZE)
    //{
        if (nl_index(str) < 0)
        {
			//int subs = BUFFER_SIZE - length;
			//if (BUFFER_SIZE > ft_strlen(str))
				//subs *= -1;
			line = (char *)malloc((ft_strlen(str) + 1) * sizeof(char));
			return_line = ft_substr(str, 0, ft_strlen(str), line);
				free(line);
			//str = ft_substr(str, ft_strlen(str), 0, str);
				move(str);
				return (return_line);
        }
    //}
    line = (char *)malloc((nl_index(str) + 1) * sizeof(char));
    return_line = ft_substr(str, 0, nl_index(str) + 1, line);
	free(line);
    //str = ft_substr(str, nl_index(str) + 1, length - 1, str);
	move(str);
    return (return_line);
}

/*char	*get_next_line(int fd)
{
	static int	last_fd;
	static char	c;
	char		*str;
	int			index;

	index = 0;
	str = (char *)malloc(1024 * 16);
	if (read(fd, &c, 1) <= 0 || BUFFER_SIZE < 0)
	{
		free (str);
		return (0);
	}
	else
	{
		if (!c)
		{
			free(str);
			return (0);
		}
		str[index] = c; 
		if (c == '\n')
			return (str);
		index++;
	}
	last_fd = -1;
	if (last_fd != fd)
	{
		last_fd = fd;
	}
	while (read(fd, &c, 1))
	{
		str[index] = c;
		index++;
		if (c == '\n' || c == '\0')
			break;
	}
	if (index == 0)
	{
		free (str);
		return (0);
	}
	return (str);
}*/

/*int main()
{
	int fd = open("deneme.txt",O_RDONLY);
	printf("%s",get_next_line(fd));
	printf("%s",get_next_line(fd));
	printf("%s",get_next_line(fd));
	printf("%s",get_next_line(fd));
	fd = open("deneme2.txt",O_RDONLY);
	printf("%s",get_next_line(fd));
	fd = 0;
	printf("%s",get_next_line(fd));
}*/
