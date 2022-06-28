/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yaaktas <yaaktas@student.42istanbul.com.t  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/24 18:32:44 by yaaktas           #+#    #+#             */
/*   Updated: 2022/06/25 18:34:09 by yaaktas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t	index;

	index = 0;
	while (*((unsigned char *)s + index) != (unsigned char)c && index < n)
		index++;
	if (index < n)
		return ((void *)(s + index));
	return (0);
}
/*int main(){

	char s[] = {0, 1, 2 ,3 ,4 ,5};
	char s2[] = {0, 1, 2 ,3 ,4 ,5};

	printf("%s\n",(char *)memchr(s,2,3));
	printf("%s",(char *)ft_memchr(s2,2,3));

}*/
