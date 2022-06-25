/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yaaktas <yaaktas@student.42istanbul.com.t  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/24 18:34:28 by yaaktas           #+#    #+#             */
/*   Updated: 2022/06/25 12:10:31 by yaaktas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char	*new_s1;

	new_s1 = (char *)malloc(ft_strlen(s1) + 1);
	if (!new_s1)
		return (0);
	ft_memcpy(new_s1, s1, ft_strlen(s1) + 1);
	return (new_s1);
}
/*int main(){

printf("%s\n",strdup("yasin"));
printf("%s",ft_strdup("yasin"));

}*/
