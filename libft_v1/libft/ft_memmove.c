/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yaaktas <yaaktas@student.42istanbul.com.t  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/23 21:45:56 by yaaktas           #+#    #+#             */
/*   Updated: 2022/06/25 00:02:55 by yaaktas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t	index;

	if (!dst && !src)
		return (0);
	if ((size_t)(dst - src) < len)
	{
		while (len > 0)
		{
			((unsigned char *)dst)[len - 1] = ((unsigned char *)src)[len - 1];
			len--;
		}
	}
	else
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
