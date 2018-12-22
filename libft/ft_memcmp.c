/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cchi <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/12 12:32:57 by cchi              #+#    #+#             */
/*   Updated: 2018/11/22 12:58:53 by cchi             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

int					ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char	*s1_s1;
	unsigned char	*s2_s2;
	unsigned int	i;
	unsigned int	n_n;

	i = 0;
	s1_s1 = (unsigned char*)s1;
	s2_s2 = (unsigned char*)s2;
	n_n = (unsigned int)n;
	if (s1_s1[0] == '\0' && s2_s2[0] == '\0')
		return (0);
	while (i < n_n && s1_s1[i] == s2_s2[i])
		i++;
	if (i < n_n && s1_s1[i] != s2_s2[i])
		return (s1_s1[i] - s2_s2[i]);
	return (0);
}
