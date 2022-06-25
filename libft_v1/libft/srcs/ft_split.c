/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yaaktas <yaaktas@student.42istanbul.com.t  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/24 18:31:15 by yaaktas           #+#    #+#             */
/*   Updated: 2022/06/25 15:34:36 by yaaktas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*static int	ft_out_size(char **output)
{
	int	index;
	
	index = 0;
	while (output[index])
		index++;
	return (index);
}*/

char	**ft_split(char const *str, char c)
{
	char	**output;
	int		start;
	int		end;
	int		output_index;

	if (!str)
		return (0);
	output = (char **)malloc(ft_strlen(str) + 1);
	if (!output)
		return (0);
	start = 0;
	end = 0;
	output_index = 0;
	while (str[end])
	{
		if (str[end] == c)
		{
			if (end - start > 0)
				output[output_index++] = ft_substr(str, start, end - start);
			start = end + 1;
		}
		end++;
	}
	if (end - start > 0)
		output[output_index++] = ft_substr(str, start, end - start);
	output[output_index] = 0;
	return (output);
}

/*int	ft_strlen_out(char **out)
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
	temp = (char *)malloc(end - start + 1);
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
	char	**output;
	int		index;
	int		index_output;
	int		start_index;

	if (!str)
		return (0);
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
}*/
