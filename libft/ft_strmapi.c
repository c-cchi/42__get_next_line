/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cchi <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/16 11:19:32 by cchi              #+#    #+#             */
/*   Updated: 2018/11/20 14:52:21 by cchi             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	int		i;
	char	*s2;

	i = 0;
	if (!(s) || !(s2 = (char*)malloc(sizeof(char) * (ft_strlen((char*)s) + 1))))
		return (0);
	while (s[i])
	{
		s2[i] = f(i, (char)s[i]);
		i++;
	}
	s2[i] = '\0';
	return (s2);
}
