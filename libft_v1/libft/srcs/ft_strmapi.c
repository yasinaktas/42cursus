/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yaaktas <yaaktas@student.42istanbul.com.t  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/24 18:37:02 by yaaktas           #+#    #+#             */
/*   Updated: 2022/06/25 12:00:30 by yaaktas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int	index;
	char			*new_str;

	if (!s)
		return (0);
	new_str = (char *)malloc(ft_strlen(s) + 1);
	if (!new_str)
		return (0);
	index = 0;
	while (s[index])
	{
		new_str[index] = f(index, s[index]);
		index++;
	}
	new_str[index] = '\0';
	return (new_str);
}
/*#include<stdio.h>
int main(){

	printf("%s",ft_strmapi("aaaaaa",ft_change_char));

}*/
