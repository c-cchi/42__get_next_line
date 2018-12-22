/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cchi <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/16 13:33:52 by cchi              #+#    #+#             */
/*   Updated: 2018/11/23 10:22:34 by cchi             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strjoin(char const *s1, char const *s2)
{
	char	*str;
	int		len;

	len = ft_strlen(s1) + ft_strlen(s2) + 1;
	if (!(str = (char*)malloc(sizeof(char) * len)))
		return (0);
	ft_strcpy(str, s1);
	ft_strcat(str, s2);
	return (str);
}
