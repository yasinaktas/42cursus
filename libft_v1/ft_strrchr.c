/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yaaktas <yaaktas@student.42istanbul.com.t  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/20 20:25:07 by yaaktas           #+#    #+#             */
/*   Updated: 2022/06/24 18:27:09 by yaaktas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int	index;	

	index = ft_strlen((char *)s);
	while ((unsigned char)s[index] != (unsigned char)c && index >= 0)
		index--;
	if (index >= 0)
	{
		if ((unsigned char)s[index] == (unsigned char)c)
			return (char *)(s + index);
	}
	return (0);
}
/*int main()
{
	 printf("%s\n",strrchr("ysasin",'s'));
         printf("%s",ft_strrchr("ysasin",'s'));
}*/
