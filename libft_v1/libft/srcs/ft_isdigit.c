/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yaaktas <yaaktas@student.42istanbul.com.t  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/20 10:47:05 by yaaktas           #+#    #+#             */
/*   Updated: 2022/06/25 11:46:03 by yaaktas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isdigit(int ch)
{	
	if (!(ch >= 48 && ch <= 57))
		return (0);
	return (1);
}
/*#include<stdio.h>
int main(){
	printf("%d",ft_isdigit('a'));
	printf("%d",ft_isdigit('1'));
}*/
