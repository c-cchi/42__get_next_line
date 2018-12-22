/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memalloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cchi <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/14 19:29:11 by cchi              #+#    #+#             */
/*   Updated: 2018/11/23 15:31:23 by cchi             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void		*ft_memalloc(size_t size)
{
	char	*str;
	int		i;

	i = 0;
	if (!(str = (char*)malloc(sizeof(char) * size)))
		return (0);
	ft_bzero(str, size);
	return (str);
}
