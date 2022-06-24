/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yaaktas <yaaktas@student.42istanbul.com.t  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/20 11:12:21 by yaaktas           #+#    #+#             */
/*   Updated: 2022/06/24 20:56:41 by yaaktas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalnum(int ch)
{
	if (ft_isalpha(ch) || ft_isdigit(ch))
		return (1);
	return (0);
	/*if ((ch >= 65 && ch <= 90))
		return (1);
	if ((ch >= 90 && ch <= 122))
		return (1);		
	if ((ch >= 48 && ch <= 57))
		return (1);
	return (0);*/
}

/*#include<stdio.h>
int main(){
	printf("%d - %d - %d",ft_isalnum('a'), ft_isalnum('1'), ft_isalnum('\0'));
}*/
