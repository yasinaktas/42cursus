/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yaaktas <yaaktas@student.42istanbul.com.t  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/20 19:56:01 by yaaktas           #+#    #+#             */
/*   Updated: 2022/06/20 20:21:43 by yaaktas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char *ft_strchr(const char *s, int c)
{
	int		index;

	index = 0;
	while ((unsigned char)s[index] != (unsigned char)c && s[index])
		index++;
	if ((unsigned char)s[index] == (unsigned char)c)
		return (char *)(s + index);
	return (0);
}

#include<stdio.h>
#include<string.h>
int main()
{
	printf("%s\n",strchr("ya\0sin",'\0'));
	printf("%s",ft_strchr("ya\0sin",'\0'));
}
