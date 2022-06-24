/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yaaktas <yaaktas@student.42istanbul.com.t  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/24 18:38:29 by yaaktas           #+#    #+#             */
/*   Updated: 2022/06/25 00:43:15 by yaaktas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putendl_fd(char *s, int fd)
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
	write (fd, "\n", 1);
}
/*int main(){

	ft_putendl_fd("yasin",1);

}*/
