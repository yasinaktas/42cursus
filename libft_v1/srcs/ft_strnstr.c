/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yaaktas <yaaktas@student.42istanbul.com.t  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/24 18:35:25 by yaaktas           #+#    #+#             */
/*   Updated: 2022/06/24 19:10:21 by yaaktas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	is_same(const char *s1, const char *s2, size_t start)
{
	size_t	index;

	index = 0;
	while (index < (size_t)ft_strlen((char *)s2))
	{
		if (s1[start] != s2[index])
		return (0);
		index++;
		start++;
	}
	return (1);
}

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	index;

	index = 0;
	if (ft_strlen((char *)needle) == 0)
		return (char *)(haystack);
	while (index < len && haystack[index])
	{
		if (is_same(haystack, needle, index))
			return (char *)(haystack + index);
		index++;
	}
	return (0);
}
/*int main(){

	printf("%s\n",strnstr("yasinaktas","k\0a",10));
	printf("%s",ft_strnstr("yasinaktas","k\0a",10));

}*/
