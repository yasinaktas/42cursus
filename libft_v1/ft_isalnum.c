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

int	ft_isalnum(char *str)
{
	char	ch;
	int		index;

	index = 0;
	while (str[index])
	{
		ch = str[index];
		index++;
		if ((ch >= 65 && ch <=90))
			continue;
		else if((ch >= 90 && ch <= 122))
			continue;
		else if((ch >= 48 && ch <= 57))
			continue;
		else
			return 0;
	}
	return 1;
}

#include<stdio.h>
int main(){
	printf("%d",ft_isalnum("yasin1234"));
	printf("%d",ft_isalnum("234sad.f"));
}
