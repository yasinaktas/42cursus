/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yaaktas <yaaktas@student.42istanbul.com.t  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/28 15:45:51 by yaaktas           #+#    #+#             */
/*   Updated: 2022/06/28 18:36:17 by yaaktas          ###   ########.fr       */
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

	if (fd < 0)
		return (0);
	if (fd > 3)
		return (0);
	last_fd = 0;
	index = 0;
	if (last_fd != fd)
	{
		last_fd = fd;
		c = ' ';
	}
	str = (char *)malloc(1024 * 216); // Sonra hallet
	while (read(fd, &c, 1))
	{
		str[index] = c;
		index++;
		if (c == '\n' || c == '\0')
			break;
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
