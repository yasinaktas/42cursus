/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yaaktas <yaaktas@student.42istanbul.com.t  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/14 10:37:54 by yaaktas           #+#    #+#             */
/*   Updated: 2022/06/24 22:22:30 by yaaktas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t		index;

	index = 0;
	if (n == 0)
		return (0);
	while (s1[index] && index < n - 1)
	{
		if (s1[index] != s2[index])
			return ((unsigned char)s1[index] - (unsigned char)s2[index]);
		index++;
	}
	return ((unsigned char)s1[index] - (unsigned char)s2[index]);
}
/*int main()
{
	printf("%d\n",ft_strncmp("\200","\0",1));
}*/
