/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cchi <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/08 19:02:37 by cchi              #+#    #+#             */
/*   Updated: 2018/11/20 13:51:02 by cchi             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int					ft_strcmp(const char *s1, const char *s2)
{
	int				i;
	unsigned char	*s1_s1;
	unsigned char	*s2_s2;

	i = 0;
	s1_s1 = (unsigned char*)s1;
	s2_s2 = (unsigned char*)s2;
	if (s1_s1[i] || s2_s2[i])
	{
		while (s1_s1[i] == s2_s2[i] && s1_s1[i])
			i++;
		if (s1_s1[i] != s2_s2[i])
			return ((unsigned char)s1_s1[i] - (unsigned char)s2_s2[i]);
	}
	return (0);
}
