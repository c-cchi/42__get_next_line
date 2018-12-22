/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cchi <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/08 18:50:13 by cchi              #+#    #+#             */
/*   Updated: 2018/11/20 13:44:22 by cchi             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

char		*ft_strnstr(const char *str, const char *to_find, size_t len)
{
	size_t	k;
	size_t	loc;
	char	*str_str;
	char	*tf_to_find;

	k = 0;
	loc = 0;
	str_str = (char*)str;
	tf_to_find = (char*)to_find;
	if (tf_to_find[k] == 0)
		return (&str_str[loc]);
	while (str_str[loc] && loc < len)
	{
		while ((str_str[loc + k] == tf_to_find[k]) && tf_to_find[k]
				&& (k + loc) < len)
		{
			k++;
			if (tf_to_find[k] == '\0')
				return (&str_str[loc]);
		}
		k = 0;
		loc++;
	}
	return (0);
}
