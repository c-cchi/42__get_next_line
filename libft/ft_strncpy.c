/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cchi <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/08 18:29:10 by cchi              #+#    #+#             */
/*   Updated: 2018/11/20 12:12:15 by cchi             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

char		*ft_strncpy(char *dst, const char *src, size_t len)
{
	size_t	i;
	char	*src_src;

	i = 0;
	src_src = (char*)src;
	while (src_src[i] && i < len)
	{
		dst[i] = src_src[i];
		i++;
	}
	while (i < len)
	{
		dst[i] = '\0';
		i++;
	}
	return (dst);
}
