/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cchi <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/08 16:27:40 by cchi              #+#    #+#             */
/*   Updated: 2018/11/22 14:24:34 by cchi             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

void			*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t		count;
	char		*temp;
	char		*tempdst;

	count = 0;
	temp = (char*)src;
	tempdst = (char*)dst;
	while (n > count)
	{
		tempdst[count] = temp[count];
		count++;
	}
	return (dst);
}
