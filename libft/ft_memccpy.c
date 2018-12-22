/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cchi <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/11 15:08:47 by cchi              #+#    #+#             */
/*   Updated: 2018/11/30 17:17:03 by cchi             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

void				*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	size_t			count;
	unsigned char	*temp_src;
	unsigned char	*temp_dst;

	count = 0;
	temp_src = (unsigned char*)src;
	temp_dst = (unsigned char*)dst;
	if (n == 0)
		return (0);
	while (n > count && temp_src[count] != (unsigned char)c)
	{
		temp_dst[count] = temp_src[count];
		count++;
	}
	if (temp_src[count] == (unsigned char)c)
	{
		temp_dst[count] = temp_src[count];
		return (&temp_dst[count + 1]);
	}
	return (0);
}
