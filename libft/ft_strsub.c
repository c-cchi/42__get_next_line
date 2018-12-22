/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cchi <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/16 12:11:14 by cchi              #+#    #+#             */
/*   Updated: 2018/11/22 13:16:37 by cchi             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char		*ft_strsub(char const *s, unsigned int start, size_t len)
{
	char	*str;
	size_t	i;

	i = 0;
	if (!(str = (char*)malloc(sizeof(char) * (len + 1))))
		return (0);
	while ((char)s[start] && len > i)
	{
		str[i] = (char)s[start + i];
		i++;
	}
	str[i] = '\0';
	return (str);
}
