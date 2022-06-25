/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yaaktas <yaaktas@student.42istanbul.com.t  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/24 18:32:44 by yaaktas           #+#    #+#             */
/*   Updated: 2022/06/25 11:48:16 by yaaktas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t			index;
	unsigned char	*new_s;

	index = 0;
	new_s = (unsigned char *)s;
	while (new_s[index] != (unsigned char)c && index < n)
		index++;
	if (new_s[index] == (unsigned char)c && index < n)
		return ((void *)(s + index));
	return (0);
}
/*int main(){

	printf("%s\n",(char *)memchr("y\0asin",'\0',3));
	printf("%s",(char *)ft_memchr("y\0asin",'\0',3));

}*/
