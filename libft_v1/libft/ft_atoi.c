/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yaaktas <yaaktas@student.42istanbul.com.t  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/20 19:32:28 by yaaktas           #+#    #+#             */
/*   Updated: 2022/06/25 17:14:45 by yaaktas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_is_space(char ch)
{
	if ((ch >= 9 && ch <= 13))
		return (1);
	if (ch == 32)
		return (1);
	return (0);
}

int	ft_atoi(const char *str)
{
	int		index;
	int		multiplier;
	long	number;

	index = 0;
	multiplier = 1;
	number = 0;
	while (ft_is_space(str[index]))
		index++;
	if (str[index] == '-' || str[index] == '+')
	{
		if (str[index] == '-')
			multiplier = -1;
		index++;
	}
	while (str[index] >= 48 && str[index] <= 57)
	{
		number = number * 10 + str[index] - 48;
		index++;
	}
	return (number * multiplier);
}
/*#include<stdlib.h>
#include<stdio.h>
int main(){
printf("%d\n",atoi("      9223372036854775899"));
printf("%d",ft_atoi("     9223372036854775899"));

}*/
