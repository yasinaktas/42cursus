/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yaaktas <yaaktas@student.42istanbul.com.t  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/20 11:45:47 by yaaktas           #+#    #+#             */
/*   Updated: 2022/06/20 13:11:54 by yaaktas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isprint(int c)
{
	unsigned char	ch;

	ch = (unsigned char)c;
	if (!(ch >= 32 && ch <= 126))
		return (0);
	return (1);
}
