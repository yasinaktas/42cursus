/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yaaktas <yaaktas@student.42istanbul.com.t  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/24 18:39:53 by yaaktas           #+#    #+#             */
/*   Updated: 2022/06/24 18:40:08 by yaaktas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putstr_fd(char *s, int fd)
{
	int	index;

	if (!s)
		return;
	index = 0;
	while (s[index])
	{
		write (fd, &s[index], 1);
		index++;
	}
}
/*int main(){

	ft_putstr_fd(0,1);

}*/
