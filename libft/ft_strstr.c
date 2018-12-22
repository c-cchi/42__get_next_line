/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cchi <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/08 18:04:13 by cchi              #+#    #+#             */
/*   Updated: 2018/11/20 13:43:21 by cchi             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char		*ft_strstr(const char *str, const char *to_find)
{
	int		k;
	int		loc;
	char	*str_str;
	char	*tf_to_find;

	k = 0;
	loc = 0;
	str_str = (char*)str;
	tf_to_find = (char*)to_find;
	if (tf_to_find[k] == 0)
		return (str_str);
	while (str_str[loc])
	{
		while (str_str[loc + k] == tf_to_find[k] && str_str[loc + k]
				&& tf_to_find[k])
		{
			k++;
			if (tf_to_find[k] == '\0')
				return (&str_str[loc]);
		}
		k = 0;
		loc++;
	}
	return (0);
}
