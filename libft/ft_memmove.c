/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cchi <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/08 17:18:01 by cchi              #+#    #+#             */
/*   Updated: 2018/11/23 13:57:25 by cchi             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void		*ft_memmove(void *dst, const void *src, size_t len)
{
	char	*dest;
	char	*source;

	dest = (char*)dst;
	source = (char*)src;
	if (src > dst)
	{
		while (len)
		{
			*dest = *source;
			dest++;
			source++;
			len--;
		}
	}
	else
	{
		while (len--)
		{
			*(dest + len) = *(source + len);
		}
	}
	return (dst);
}
