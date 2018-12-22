/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cchi <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/09 15:07:19 by cchi              #+#    #+#             */
/*   Updated: 2018/11/23 18:00:41 by cchi             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strrchr(const char *s, int c)
{
	int len;

	len = ft_strlen(s);
	while ((char)s[len] != (char)c && len != 0)
	{
		len--;
		if ((char)s[len] == (char)c)
			return ((char*)&s[len]);
	}
	if ((char)c == '\0')
		return ((char*)&s[len]);
	return (0);
}
