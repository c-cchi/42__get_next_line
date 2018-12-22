/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cchi <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/20 11:48:15 by cchi              #+#    #+#             */
/*   Updated: 2018/11/23 18:33:24 by cchi             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list		*ft_lstnew(void const *content, size_t content_size)
{
	t_list	*t;

	if (!(t = (t_list*)malloc(sizeof(*t))))
		return (NULL);
	if (content == NULL)
	{
		t->content = NULL;
		t->content_size = 0;
	}
	else
	{
		if ((t->content = malloc(content_size)) == NULL)
		{
			free(t);
			return (NULL);
		}
		ft_memcpy(t->content, content, content_size);
		t->content_size = content_size;
	}
	t->next = NULL;
	return (t);
}
