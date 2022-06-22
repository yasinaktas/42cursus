/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yaaktas <yaaktas@student.42istanbul.com.t  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/20 10:33:18 by yaaktas           #+#    #+#             */
/*   Updated: 2022/06/20 10:44:52 by yaaktas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isalpha(char *str)
{
	int		index;
	char	ch;

	index = 0;
	while (str[index])
	{
		ch = str[index];
		if (!((ch >= 65 && ch <= 90) || (ch >= 97 && ch <= 122)))
			return 0;
		index++;
	}
	return 1;
}


#include<stdio.h>
int main(){
	printf("%d",ft_isalpha("yasin"));
	printf("%d",ft_isalpha("1asd"));
}
