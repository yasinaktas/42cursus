/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yaaktas <yaaktas@student.42istanbul.com.t  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/24 18:34:08 by yaaktas           #+#    #+#             */
/*   Updated: 2022/06/25 18:38:57 by yaaktas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t			index;
	unsigned char	*new_s1;
	unsigned char	*new_s2;

	index = 0;
	new_s1 = (unsigned char *)s1;
	new_s2 = (unsigned char *)s2;
	while (*(new_s1 + index) == *(new_s2 + index) && index < n)
		index++;
	if (index != n)
		return (*(new_s1 + index) - *(new_s2 + index));
	return (0);
}
/*int main(){

	printf("%d\n",memcmp("","",0));
	printf("%d",ft_memcmp("","",0));

}*/
