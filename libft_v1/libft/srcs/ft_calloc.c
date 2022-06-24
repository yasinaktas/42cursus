/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yaaktas <yaaktas@student.42istanbul.com.t  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/24 18:31:46 by yaaktas           #+#    #+#             */
/*   Updated: 2022/06/25 01:07:31 by yaaktas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	size_t	total;
	void	*dst;

	total = count * size;
	if (!(dst = malloc(total)))
		return (0);
	ft_memset(dst, 0, total);
	return (dst);
}
/*int main(){

 char *str = ft_calloc(2,2);
 if(!str)
 	return (0);
 int index = 0;
 while (index < 4){
	printf("%c-",str[index]);
	index++;
 }

}*/
