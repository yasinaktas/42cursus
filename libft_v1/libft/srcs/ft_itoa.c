/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yaaktas <yaaktas@student.42istanbul.com.t  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/24 18:36:42 by yaaktas           #+#    #+#             */
/*   Updated: 2022/06/25 00:31:00 by yaaktas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_itoa(int n)
{
	long	nbr;
	long	multiplier;
	char	*str_nbr;
	int	index;

	if (!(str_nbr = (char *)malloc(1024 * 16)))
		return (0);
	index = 0;
	nbr = n;
	if (nbr < 0)
	{
		nbr = -nbr;
		str_nbr[index++] = '-';
	}
	multiplier = 1;
	while (nbr / multiplier > 10)
		multiplier *= 10;
	while (multiplier >= 1)
	{
		str_nbr[index] = (char)((nbr / multiplier) + '0');
		nbr = nbr % multiplier;
		multiplier = multiplier / 10;
		index++;
	}
	str_nbr[index] = '\0';
	return (str_nbr);
}
/*int main(){

	printf("%s",ft_itoa(-2147483648));

}*/
