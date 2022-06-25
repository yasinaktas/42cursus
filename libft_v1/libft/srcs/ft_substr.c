/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yaaktas <yaaktas@student.42istanbul.com.t  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/24 18:36:22 by yaaktas           #+#    #+#             */
/*   Updated: 2022/06/25 16:25:08 by yaaktas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*sub_str;
	size_t	index;

	if (!s)
		return (0);
	sub_str = (char *)malloc(len + 1);
	if (!sub_str)
		return (0);
	if (ft_strlen(s) < start)
	{
		sub_str[0] = '\0';
		return (sub_str);
	}
	index = 0;
	while (index < len && s[start])
	{
		sub_str[index] = s[start];
		index++;
		start++;
	}
	sub_str[len] = '\0';
	return (sub_str);
}
/*int main(){

	printf("%s", ft_substr("ya\0sinaktas",0,3));

}*/
