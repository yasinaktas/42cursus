/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yaaktas <yaaktas@student.42istanbul.com.t  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/20 11:26:30 by yaaktas           #+#    #+#             */
/*   Updated: 2022/06/24 18:25:07 by yaaktas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isascii(int c)
{
	unsigned char	ch;
	
	ch = (unsigned char)c;
	if(!(ch >= 0 && ch <= 127))
		return (0);
	return (1);
}
