/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cchi <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/20 16:33:21 by cchi              #+#    #+#             */
/*   Updated: 2018/12/22 19:56:59 by cchi             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

static char		*strtoreturn(char *str, char *s, char **line)
{
	char			*swap;

	*line = ft_strsub(str, 0, s - str);
	if (*s != '\0')
		swap = ft_strdup(s + 1);
	else
		swap = ft_strnew(0);
	ft_strdel(&str);
	return (swap);
}

int				get_next_line(const int fd, char **line)
{
	char			buf[BUFF_SIZE + 1];
	static char		*str = NULL;
	int				nbread;
	char			*temp;
	char			*s;

	temp = NULL;
	if (fd < 0 || BUFF_SIZE <= 0 || read(fd, 0, 0) == -1)
		return (-1);
	if (!str)
		str = ft_strnew(0);
	while (!(s = ft_strchr(str, '\n'))
		&& (nbread = read(fd, buf, BUFF_SIZE)) > 0)
	{
		buf[nbread] = '\0';
		temp = ft_strjoin(str, buf);
		ft_strdel(&str);
		str = temp;
	}
	if (s || ((s = ft_strchr(str, '\0')) && nbread == 0 && str[0] != '\0'))
	{
		str = strtoreturn(str, s, line);
		return (1);
	}
	return (0);
}
