/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cchi <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/20 16:33:21 by cchi              #+#    #+#             */
/*   Updated: 2018/12/22 19:21:41 by cchi             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"
#include <stdio.h>

static char	*strtoreturn(char *str, char *s, unsigned int i, char **line)
{
	unsigned int j;
	char	*swap;

	j = 0;
	j = s - (str + i);
	if (str[1] == '\n')
	{
		*line = ft_strnew(0);
		if (str[2])
			swap = ft_strdup(&str[2]);
		else
			swap = ft_strnew(0);
	}
	else
	{
		*line = ft_strsub(str, i, j);
		swap = ft_strdup(&str[i + j]);
	}
	ft_strdel(&str);
	return (swap);
}

int	get_next_line(const int fd, char **line)
{
	char			buf[BUFF_SIZE + 1];
	static char		*str = NULL;
	unsigned int	i;
	int				nbread;
	char			*temp;
	char			*s;

	temp = NULL;
	i = 0;
	if (fd < 0 || !BUFF_SIZE || read(fd, 0, 0) == -1 || BUFF_SIZE < 0)
		return (-1);
	if (!str)
		str = ft_strnew(0);
	if (str[i] == '\n')
		i++;
	while ((nbread = read(fd, buf, BUFF_SIZE)) > 0 && !(ft_strchr((str + i), '\n')))
	{
		buf[nbread] = '\0';
		temp = ft_strjoin((str), buf);
		ft_strdel(&str);
		str = temp;
		if (ft_strchr((str + i), '\n'))
			break ;
	}
	if ((s = ft_strchr((str + i), '\n')) 
			|| ((s = (str + i + ft_strlen((str + i)))) && nbread == 0 && ft_strlen(str + i)))
	{
		str = strtoreturn(str, s, i, line);
		return (1);
	}
	if (nbread == 0 && ft_strlen(str) == 0)
		return (0);
	return (0);
}
