/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yaaktas <yaaktas@student.42istanbul.com.t  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/20 17:06:42 by yaaktas           #+#    #+#             */
/*   Updated: 2022/06/26 13:17:59 by yaaktas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *dst, size_t n)
{
	if (n != 0)
		ft_memset(dst, '\0', n);
}
/*#include<stdio.h>
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
}*/
