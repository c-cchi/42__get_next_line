/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cchi <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/16 18:23:07 by cchi              #+#    #+#             */
/*   Updated: 2018/11/20 14:43:35 by cchi             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strtrim(char const *s)
{
	char	*str;
	int		i;
	int		lens;
	int		k;

	i = 0;
	k = 0;
	lens = ft_strlen(s) - 1;
	while (s[i] == '\t' || s[i] == '\n' || s[i] == ' ')
	{
		i++;
		if (i == lens)
			return ("");
	}
	while (s[lens] == '\t' || s[lens] == '\n' || s[lens] == ' ')
		lens--;
	if (!(str = (char*)malloc(sizeof(char) * (lens - i + 2))))
		return (0);
	while (s[i + k] && lens - i + 1 > k)
	{
		str[k] = s[k + i];
		k++;
	}
	str[k] = '\0';
	return (str);
}
