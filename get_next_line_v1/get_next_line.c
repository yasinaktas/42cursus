/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yaaktas <yaaktas@student.42istanbul.com.t  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/28 15:45:51 by yaaktas           #+#    #+#             */
/*   Updated: 2022/06/28 19:39:49 by yaaktas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include<unistd.h>
#include<stdlib.h>
#include<stdio.h>
#include<sys/types.h>
#include<sys/stat.h>
#include <fcntl.h>*/

#include "get_next_line.h"

char	*get_next_line(int fd)
{
	static int	last_fd;
	static char	c;
	char		*str;
	int			index;

	index = 0;
	str = (char *)malloc(1024 * 16);
	if (read(fd, &c, 1) <= 0)
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
}

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
