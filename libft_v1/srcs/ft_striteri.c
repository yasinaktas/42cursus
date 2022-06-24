/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yaaktas <yaaktas@student.42istanbul.com.t  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/24 18:37:32 by yaaktas           #+#    #+#             */
/*   Updated: 2022/06/24 18:37:49 by yaaktas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_print(unsigned int index, char *str)
{
	printf("%u - %c\n", index, str[0]);
}

void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	unsigned int	index;

	index = 0;
	while (s[index])
	{
		f(index, (s + index));
		index++;
	}
}
/*int main(){

ft_striteri("yasin",ft_print);

}*/
