/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yaaktas <yaaktas@student.42istanbul.com.t  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/20 10:47:05 by yaaktas           #+#    #+#             */
/*   Updated: 2022/06/20 11:06:10 by yaaktas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isdigit(char *str)
{
	int		index;
	char	ch;

	index = 0;
	while (str[index])
	{
		ch = str[index];
		if (!(ch >= 48 && ch <= 57))
			return 0;
		index++;
	}
	return 1;
}

#include<stdio.h>
int main(){
	printf("%d",ft_isdigit("1234a"));
	printf("%d",ft_isdigit("1234"));
}
