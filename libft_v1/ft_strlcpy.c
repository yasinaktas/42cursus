/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yaaktas <yaaktas@student.42istanbul.com.t  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/13 13:55:29 by yaaktas           #+#    #+#             */
/*   Updated: 2022/06/24 16:31:41 by yaaktas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<string.h>
#include<stdio.h>

size_t	ft_strlcpy(char *dest, const char *src, size_t size)
{
	size_t	index;
	int				src_size;

	index = 0;
	src_size = 0;
	while (src[src_size])
	{
		src_size++;
	}
	while (src[index] && index < size - 1) // \0 included in dest size
	{
		dest[index] = src[index];
		index++;
	}
	dest[index] = '\0';
	return (src_size);
}

int main(int ac, char **av){

	printf("%lu\n",ft_strlcpy(av[ac - 1],"celalcelall",10));
	printf("%lu",strlcpy(av[ac - 1],"celalcelall",10));

}
