/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yaaktas <yaaktas@student.42istanbul.com.t  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/24 18:31:15 by yaaktas           #+#    #+#             */
/*   Updated: 2022/06/24 20:33:26 by yaaktas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strlen_out(char **out)
{
	int		index;

	index = 0;
	while (out[index])
		index++;
	return (index);
}

static void	ft_add_output(char const *str, int start, int end, char **out)
{
	char	*temp;
	int		index2;

	index2 = 0;
	temp = (char *)malloc(1024 * 16);
	while (start < end)
	{
		temp[index2] = str[start];
		index2++;
		start++;
	}
	temp[index2] = '\0';
	if (index2 != 0)
		out[ft_strlen_out(out)] = temp;
}

char	**ft_split(char const *str, char c)
{
	char		**output;
	int		index;
	int		index_output;
	int		start_index;

	output = (char **)malloc(1024 * 16);
	index = 0;
	index_output = 0;
	start_index = 0;
	while (str[index])
	{
		if (str[index] == c)
		{
			ft_add_output(str, start_index, index, output);
			index_output++;
			start_index = index + 1;
		}
		index++;
	}
	ft_add_output(str, start_index, index, output);
	output[index_output + 1] = 0;
	return (output);
}
