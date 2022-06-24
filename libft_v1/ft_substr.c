/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yaaktas <yaaktas@student.42istanbul.com.t  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/24 18:36:22 by yaaktas           #+#    #+#             */
/*   Updated: 2022/06/24 18:36:35 by yaaktas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*sub_str;
	size_t	index;

	if (!(sub_str = (char *)malloc(len)))
		return (0);
	index = 0;
	while (index < len && s[start])
	{
		sub_str[index] = s[start];
		index++;
		start++;
	}
	return (sub_str);
}
/*int main(){

	printf("%s", ft_substr("ya\0sinaktas",0,3));

}*/
