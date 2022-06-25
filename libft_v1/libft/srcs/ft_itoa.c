/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yaaktas <yaaktas@student.42istanbul.com.t  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/24 18:36:42 by yaaktas           #+#    #+#             */
/*   Updated: 2022/06/25 14:58:08 by yaaktas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	digit_count(long n)
{
	int	count;

	if (n == 0)
		return (1);
	count = 0;
	if (n < 0)
	{
		n = -n;
		count++;
	}
	while (n > 0)
	{
		n /= 10;
		count++;
	}
	return (count);
}

char	*ft_itoa(int n)
{
	long	nbr;
	int		digits;
	char	*nbr_str;

	nbr = n;
	digits = digit_count(nbr);
	nbr_str = (char *)malloc(digits + 1);
	if (!nbr_str)
		return (0);
	if (nbr == 0)
		nbr_str[0] = '0';
	if (nbr < 0)
	{
		nbr = -nbr;
		nbr_str[0] = '-';
	}
	while (nbr > 0)
	{
		nbr_str[digits - 1] = (char)((nbr % 10) + '0');
		digits--;
		nbr = nbr / 10;
	}
	nbr_str[digit_count((long)n)] = '\0';
	return (nbr_str);
}
/*int main(){

	printf("%s",ft_itoa(-2147483648));

}*/
