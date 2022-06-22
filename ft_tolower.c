/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yaaktas <yaaktas@student.42istanbul.com.t  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/20 19:52:43 by yaaktas           #+#    #+#             */
/*   Updated: 2022/06/20 19:55:23 by yaaktas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_tolower(int c)
{
	if (c >= 65 && c <= 97)
		return (c + 32);
	return (c);
}


#include<stdio.h>
#include<ctype.h>
int main(){
printf("%c",ft_tolower('1'));
}
