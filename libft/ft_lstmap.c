/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cchi <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/26 11:05:15 by cchi              #+#    #+#             */
/*   Updated: 2018/11/26 14:43:28 by cchi             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem))
{
	t_list	*new_t;

	new_t = NULL;
	if (lst)
	{
		if (!(new_t = malloc(sizeof(t_list))))
			return (0);
		new_t = f(lst);
		new_t->next = ft_lstmap(lst->next, f);
	}
	return (new_t);
}
