/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yaaktas <yaaktas@student.42istanbul.com.t  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/24 18:39:10 by yaaktas           #+#    #+#             */
/*   Updated: 2022/06/24 21:37:40 by yaaktas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	long	nb;
	int		i;
	char	c[10];

	nb = n;
	if (nb == 0)
		ft_putchar_fd('0', fd);
	if (nb < 0)
	{
		ft_putchar_fd('-', fd);
		nb = -nb;
	}
	i = 0;
	while (nb > 0)
	{
		c[i] = nb % 10 + '0';
		nb = nb / 10;
		i++;
	}
	i--;
	while (i >= 0)
	{
		ft_putchar_fd(c[i], fd);
		i--;
	}
}
/*int main(){

	ft_putnbr_fd(12346,1);

}*/
