/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yaaktas <yaaktas@student.42istanbul.com.t  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/20 17:24:45 by yaaktas           #+#    #+#             */
/*   Updated: 2022/06/23 18:21:01 by yaaktas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include<string.h>
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

#include<stdio.h>
int main()
{

	char str[] = "123456789";
	char str2[] = "abcdefghj";
	char str3[] = "klmnoprst";
	printf("%s\n",(char *)ft_memcpy(str+5,str+4,5));
	printf("%s\n",(char *)ft_memcpy(str2+5, str2+4,5));
	printf("%s",(char *)ft_memcpy(str3+5, str3+4,5));
}
