/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yaaktas <yaaktas@student.42istanbul.com.t  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/20 11:12:21 by yaaktas           #+#    #+#             */
/*   Updated: 2022/06/20 11:25:22 by yaaktas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isalnum(int c)
{
	unsigned char	ch;

	ch = (unsigned char)c;
	if ((ch >= 65 && ch <=90))
		return (1);
	else if((ch >= 90 && ch <= 122))
		return (1);		
	else if((ch >= 48 && ch <= 57))
		return (1);
	return (0);
}

#include<stdio.h>
int main(){
	printf("%d - %d - %d",ft_isalnum('a'), ft_isalnum('1'), ft_isalnum('\0'));
}
