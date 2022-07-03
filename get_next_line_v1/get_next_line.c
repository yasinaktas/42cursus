/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yaaktas <yaaktas@student.42istanbul.com.t  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/28 15:45:51 by yaaktas           #+#    #+#             */
/*   Updated: 2022/07/02 19:55:26 by yaaktas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

int	nl_index(char *str)
{
	int		index;

	index = 0;
	while (str[index])
	{
		if (str[index] == '\n')
			return (index);
		index++;
	}
	return (-1);
}

void    get_next_line_1(char *str, char *buffer, int length)
{
	char	*temp;

	temp = (char *)malloc((ft_strlen(str) + length + 1) * sizeof(char));
    temp = ft_strjoin(str, buffer, temp);
    free(str);
    str = (char *)ft_calloc((ft_strlen(temp) + 1), sizeof(char));
    str = ft_memmove((void *)str, (void *)temp, ft_strlen(temp));
    free(temp);
}

char    *get_next_line_2(char *str)
{
	char	*temp;
	char	*return_line;

    if (nl_index(str) < 0)
    {
        temp = (char *)malloc((ft_strlen(str) + 1) * sizeof(char));
        return_line = ft_substr(str, 0, ft_strlen(str), temp);
    }
    else
    {
        temp = (char *)malloc((nl_index(str) + 1) * sizeof(char));
        return_line = ft_substr(str, 0, nl_index(str) + 1, temp);
    }
	free(temp);
	return (return_line);
}

char	*get_next_line(int fd)
{
	static char	*str;
	char		*buffer;
	int			length;
	char		*temp;

	if (BUFFER_SIZE <= 0 || read(fd, 0, 0) == -1)
		return (0);
	if (!str)
		str = (char *)malloc(1);
	buffer = (char *)malloc(sizeof(char) * (BUFFER_SIZE + 1));
	while (nl_index(str) < 0)
	{
		length = read(fd, buffer, BUFFER_SIZE);
		if (!length)
					break ;
		buffer[length] = 0;
		/*if (!read(fd, buffer, BUFFER_SIZE))
			break;
		buffer[ft_strlen(buffer)] = 0;*/
		temp = (char *)malloc((ft_strlen(str) + length + 1) * sizeof(char));
		temp = ft_strjoin(str, buffer, temp);
		free(str);
		str = (char *)ft_calloc((ft_strlen(temp) + 1), sizeof(char));
		str = ft_memmove((void *)str, (void *)temp, ft_strlen(temp));
		free(temp);
	}
	free(buffer);
	if (*str == 0)
	{
		free(str);
		str = 0;
		return (0);
	}
    temp = get_next_line_2(str);
	move(str);
	return (temp);
}
