/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yaaktas <yaaktas@student.42istanbul.com.t  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/24 18:31:15 by yaaktas           #+#    #+#             */
/*   Updated: 2022/06/25 16:51:57 by yaaktas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	**ft_split(char const *str, char c)
{
	char			**output;
	unsigned int	start;
	unsigned int	end;
	int				output_index;

	output = (char **)malloc(1024 * 16);
	if (!str || !output)
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
/*int main()
{
	char **output;

	output = (char **)malloc(1024*16);
	output = ft_split("yasin||  ||this|for|me|||||!|", '|');
	int index = 0;
	while (index < 5)
	{
		printf("\n%s",output[index]);
		index++;
	}
}*/
