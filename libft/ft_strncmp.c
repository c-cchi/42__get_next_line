/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cchi <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/08 19:16:45 by cchi              #+#    #+#             */
/*   Updated: 2018/11/20 13:53:23 by cchi             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

int					ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t			i;
	unsigned char	*s1_s1;
	unsigned char	*s2_s2;

	i = 0;
	s1_s1 = (unsigned char*)s1;
	s2_s2 = (unsigned char*)s2;
	if (n == 0)
		return (0);
	if (s1_s1[i] || s2_s2[i])
	{
		while (s1_s1[i] == s2_s2[i] && s1_s1[i] && i < n)
			i++;
		if (s1_s1[i] != s2_s2[i] && i < n)
			return ((unsigned char)s1[i] - (unsigned char)s2[i]);
	}
	return (0);
}
