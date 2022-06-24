/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yaaktas <yaaktas@student.42istanbul.com.t  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/20 16:05:46 by yaaktas           #+#    #+#             */
/*   Updated: 2022/06/24 18:27:50 by yaaktas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *dst, int ch, size_t len)
{
	size_t	index;
	unsigned char* new_dst;

	index = 0;
	new_dst = (unsigned char *)dst;
	while (index < len)
	{
		new_dst[index] = (unsigned char)ch;
		index++;
	}
	return dst;
}
/*#include<stdio.h>
#include<stdlib.h>
int main(int ac, char **av){
printf("%s",ft_memset(av[ac - 1],'a',4));
}*/
