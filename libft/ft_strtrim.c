/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yaaktas <yaaktas@student.42istanbul.com.t  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/24 18:35:52 by yaaktas           #+#    #+#             */
/*   Updated: 2022/06/26 13:13:48 by yaaktas          ###   ########.fr       */
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
	int		start;
	int		end;

	if (!s1 || !set)
		return (0);
	start = 0;
	end = ft_strlen(s1) - 1;
	while (is_in_set(s1[start], set))
		start++;
	while (is_in_set(s1[end], set))
		end--;
	return (ft_substr(s1, start, end - start + 1));
}
/*int main(){

	printf("%s",ft_strtrim("yasinaktas","yas"));

}*/
