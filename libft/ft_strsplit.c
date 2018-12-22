/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cchi <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/20 16:24:36 by cchi              #+#    #+#             */
/*   Updated: 2018/12/22 22:14:28 by cchi             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_nmot(char const *s, char c)
{
	size_t	i;
	size_t	n_s;

	i = 0;
	n_s = 0;
	while (s[i])
	{
		if (i == 0 && s[i] != c)
			n_s++;
		if (s[i] == c && s[i + 1] != c && s[i + 1] != '\0')
			n_s++;
		i++;
	}
	return (n_s);
}

char		**ft_strsplit(char const *s, char c)
{
	char	**arr;
	int		i;
	int		k;
	int		size;

	i = 0;
	k = 0;
	if (!c || !(arr = (char**)malloc(sizeof(char*) * (ft_nmot(s, c) + 1))))
		return (0);
	while (ft_nmot(s, c) > k)
	{
		while ((char)s[i] == c && s[i])
			i++;
		size = 0;
		while ((char)s[i] != c && s[i])
		{
			size++;
			i++;
		}
		arr[k] = ft_strsub(s, i - size, size);
		k++;
		arr[k] = NULL;
	}
	arr[k] = 0;
	return (arr);
}
