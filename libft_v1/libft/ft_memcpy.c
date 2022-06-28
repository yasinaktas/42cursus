/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yaaktas <yaaktas@student.42istanbul.com.t  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/20 17:24:45 by yaaktas           #+#    #+#             */
/*   Updated: 2022/06/24 18:29:12 by yaaktas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t	index;

	index = 0;
	if (!dst && !src)
		return (0);
	while (index < n)
	{
		((unsigned char *)dst)[index] = ((unsigned char *)src)[index];
		index++;
	}
	return (dst);
}
/*#include<stdio.h>
int main()
{

	char str[] = "123456789";
	char str2[] = "abcdefghj";
	char str3[] = "klmnoprst";
	printf("%s\n",(char *)ft_memcpy(str,str,5));
	printf("%s\n",(char *)memcpy(str2,str2,5));
	printf("%s",(char *)memmove(0, str3,5));
}*/
