/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yaaktas <yaaktas@student.42istanbul.com.t  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/02 11:23:46 by yaaktas           #+#    #+#             */
/*   Updated: 2022/07/02 13:57:07 by yaaktas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

size_t	ft_strlen(const char *str)
{
	size_t	index;

	index = 0;
	while (str[index])
		index++;
	return (index);
}

char	*ft_strjoin(char const *s1, char const *s2, char *new_str)
{
	int		index;
	int		index2;

	if (!s1 && !s2)
		return (0);
	index = 0;
	while (s1[index])
	{
		new_str[index] = s1[index];
		index++;
	}
	index2 = 0;
	while (s2[index2])
	{
		new_str[index] = s2[index2];
		index++;
		index2++;
	}
	new_str[index] = '\0';
	return (new_str);
}

char	*ft_substr(char const *s, unsigned int start, size_t len, char *sub_str)
{
	size_t	index;

	if (!s)
		return (0);
	if (ft_strlen(s) - start < len)
		len = ft_strlen(s) - start;
	sub_str = (char *)malloc(len + 1);
	if (!sub_str)
		return (0);
	if (ft_strlen(s) < start)
	{
		sub_str[0] = '\0';
		return (sub_str);
	}
	index = 0;
	while (index < len && s[start])
	{
		sub_str[index] = s[start];
		index++;
		start++;
	}
	sub_str[len] = '\0';
	return (sub_str);
}

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t	index;

	if (!dst && !src)
		return (0);
	if ((size_t)(dst - src) < len)
	{
		while (len > 0)
		{
			((unsigned char *)dst)[len - 1] = ((unsigned char *)src)[len - 1];
			len--;
		}
	}
	else
	{
		index = 0;
		while (index < len)
		{
			((unsigned char *)dst)[index] = ((unsigned char *)src)[index];
			index++;
		}
	}
	return (dst);
}

void    *ft_calloc(size_t count, size_t size)
{
    long		total;
    void		*dst;
	long		index;

	index = 0;
    total = count * size;
    dst = malloc(total);
    if (!dst)
        return (0);
    while (index < total)
	{
		*(unsigned char *)(dst + index) = 0;
		index++;
	}
    return (dst);
}

void	move(char *str)
{
	int		len;
	int		nl_idx;

	len = ft_strlen(str);
	nl_idx = nl_index(str);
	if (nl_idx == -1)
		*str = 0;
	else
	{
		ft_memmove(str, str + nl_idx + 1, len - nl_idx + 1);
		str[len - nl_idx] = 0;
	}
}
