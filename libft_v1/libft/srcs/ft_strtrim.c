/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yaaktas <yaaktas@student.42istanbul.com.t  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/24 18:35:52 by yaaktas           #+#    #+#             */
/*   Updated: 2022/06/25 00:39:59 by yaaktas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	is_in_set(char ch, char const *set)
{
	int	index;

	index = 0;
	while (set[index])
	{
		if (set[index] == ch)
			return (1);
		index++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	int	start;
	int	end;
	char	*s2;
	int	tmp;

	if (!s1 || !set)
		return (0);
	start = 0;
	end = ft_strlen(s1) - 1;
	while (is_in_set(s1[start], set))
		start++;
	while (is_in_set(s1[end], set))
		end--;
	if (start > end)
	{
		tmp = start;
		start = end;
		end = tmp;
	}
	if (!(s2 = (char *)malloc(end - start + 1)))
		return (0);
	return (ft_substr(s1, start, end - start + 1));
}
/*int main(){

	printf("%s",ft_strtrim("yasinaktas","yas"));

}*/
