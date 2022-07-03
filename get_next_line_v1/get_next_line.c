/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yaaktas <yaaktas@student.42istanbul.com.t  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/28 15:45:51 by yaaktas           #+#    #+#             */
/*   Updated: 2022/07/03 11:50:39 by yaaktas          ###   ########.fr       */
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

void	move(char *str)
{
	int		len;
	int		nl_idx;

	len = ft_strlen(str);
	nl_idx = nl_index(str);
	if (nl_idx == -1)
		*str = 0;
	else
	{
		ft_memmove(str, str + nl_idx + 1, len - nl_idx + 1);
		str[len - nl_idx] = 0;
	}
}

char	*get_next_line_2(char *str)
{
	char	*temp;
	char	*return_line;

	if (!str)
		return (0);
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
	move(str);
	return (return_line);
}

char	*get_next_line(int fd)
{
	static char	*str;
	char		*buffer;
	int			length;

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
		str = ft_strjoin(str, buffer, length);
	}
	free(buffer);
	if (*str == 0)
	{
		free(str);
		str = 0;
	}
	buffer = get_next_line_2(str);
	return (buffer);
}
