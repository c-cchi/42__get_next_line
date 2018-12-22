/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cchi <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/08 12:28:43 by cchi              #+#    #+#             */
/*   Updated: 2018/11/22 13:02:10 by cchi             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

void	*ft_memset(void *b, int c, size_t len)
{
	size_t			count;
	unsigned char	*temp;

	count = 0;
	temp = (unsigned char*)b;
	while (count < len)
	{
		temp[count] = (unsigned char)c;
		count++;
	}
	return (b);
}
