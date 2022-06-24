/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yaaktas <yaaktas@student.42istanbul.com.t  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/20 10:33:18 by yaaktas           #+#    #+#             */
/*   Updated: 2022/06/24 20:50:02 by yaaktas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalpha(int ch)
{
	if (((ch >= 65 && ch <= 90) || (ch >= 97 && ch <= 122)))
		return (1);
	return (0);
}
/*#include<stdio.h>
int main(){
	printf("%d",ft_isalpha('a'));
	printf("%d",ft_isalpha('1'));
}*/
