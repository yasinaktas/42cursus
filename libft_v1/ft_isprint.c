/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yaaktas <yaaktas@student.42istanbul.com.t  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/20 11:45:47 by yaaktas           #+#    #+#             */
/*   Updated: 2022/06/20 13:11:54 by yaaktas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isprint(char *str)
{
	int		index;
	char	ch;

	index = 0;
	while (str[index])
	{
		ch = str[index];
		index++;
		if (!(ch >= 32 && ch <= 126))
			return 0;
	}
	return 1;
}

#include<stdio.h>
int main(){
	printf("%d",ft_isprint("asdfasf.324i6"));
	printf("%d",ft_isprint("asdfsd\nfasdf"));
}
