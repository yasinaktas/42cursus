/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yaaktas <yaaktas@student.42istanbul.com.t  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/14 10:37:54 by yaaktas           #+#    #+#             */
/*   Updated: 2022/06/24 18:31:01 by yaaktas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	unsigned char	ch1;
	unsigned char	ch2;
	size_t		index;

	index = 0;
	if (n == 0)
		return (0);
	while (s1[index] && index < n - 1)
	{
		ch1 = s1[index];
		ch2 = s2[index];
		if (ch1 != ch2)
			return (ch1 - ch2);
		index++;
	}
	return (s1[index] - s2[index]);
}
/*int main()
{
	printf("%d\n",ft_strncmp("ab\0ck","abcc",5));
}*/
