/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yaaktas <yaaktas@student.42istanbul.com.t  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/23 21:45:56 by yaaktas           #+#    #+#             */
/*   Updated: 2022/06/24 18:41:16 by yaaktas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t	index;

	if (!dst && !src)
		return (0);
	printf("%lu\n",(size_t)(dst - src));
	if ((size_t)(dst - src) < len) // aradaki uzaklığa bak, lenden küçük mü? overflow olabilir // Sondan başla
	{
		while (len > 0)
		{
			((unsigned char *)dst)[len - 1] = ((unsigned char *)src)[len - 1];
			len--;
		}
	}
	else // baştan başla
	{
		index = 0;
		while (index < len)
		{
			((unsigned char *)dst)[index] = ((unsigned char *)src)[index];
			index++;
		}
	}
	return (dst);
}
/*int main()
{
        char str[] = "123456789";
        char str2[] = "abcdefghj";
	char str3[] = "klmnoprts";
	printf("%s\n",(char *)memcpy(str+5,str+2,5));
	printf("%s\n",(char *)memmove(str2+5,str2+2,5));
	printf("%s",(char *)ft_memmove(str3+5,str3+2,5));
}*/
