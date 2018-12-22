/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cchi <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/11 19:32:49 by cchi              #+#    #+#             */
/*   Updated: 2018/11/27 12:23:53 by cchi             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

void				*ft_memchr(const void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	*s_s;

	i = 0;
	s_s = (unsigned char *)s;
	while (n)
	{
		if ((*s_s) == (unsigned char)c)
			return ((unsigned char *)(s_s));
		n--;
		s_s++;
	}
	return (NULL);
}
