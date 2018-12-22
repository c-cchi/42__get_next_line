/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cchi <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/14 19:10:34 by cchi              #+#    #+#             */
/*   Updated: 2018/11/22 13:11:07 by cchi             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char		*ft_strdup(const char *s1)
{
	int		i;
	char	*copy;

	i = 0;
	while ((char)s1[i])
		i++;
	if (!(copy = (char*)malloc(sizeof(*copy) * (i + 1))))
		return (0);
	i = 0;
	while ((char)s1[i])
	{
		copy[i] = (char)s1[i];
		i++;
	}
	copy[i] = '\0';
	return (copy);
}
