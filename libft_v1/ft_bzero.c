/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yaaktas <yaaktas@student.42istanbul.com.t  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/20 17:06:42 by yaaktas           #+#    #+#             */
/*   Updated: 2022/06/20 17:20:55 by yaaktas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<string.h>

void	ft_bzero(void *dst, size_t n)
{
	size_t	index;
	unsigned char* new_dst;

	index = 0;
	new_dst = (unsigned char*)dst;
	if (n == 0)
		return;
	while (index < n)
	{
		new_dst[index] = '\0';
		index++;
	}
	dst = (void *)new_dst;
}

#include<stdio.h>
#include<strings.h>
int main(int ac, char** av){
	ft_bzero(av[ac - 1],2);
	printf("%s",av[ac - 1]);
	int index = 0;
	while (index < 5){
		if(av[ac - 1][index] == '\0'){
			printf("%s",".");
		}else{
			printf("%c",av[ac - 1][index]);
		}
		index++;
	}
}
