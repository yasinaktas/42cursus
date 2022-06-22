/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yaaktas <yaaktas@student.42istanbul.com.t  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/20 11:26:30 by yaaktas           #+#    #+#             */
/*   Updated: 2022/06/20 11:45:18 by yaaktas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isascii(char *str)
{
	int		index;
	char	ch;
	
	index = 0;
	while (str[index])
	{
		ch = str[index];
		index++;
		if(!(ch >= 0 && ch <= 127))
			return 0;
	}
	return 1;
}

#include<stdio.h>
int main(){
	printf("%d",ft_isascii("asdfsdf23.|\ndgh#ÿÿ§€¢"));
	printf("%d",ft_isascii("asdfsadf1123."));
}
