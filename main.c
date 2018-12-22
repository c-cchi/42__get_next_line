/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cchi <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/27 11:55:29 by cchi              #+#    #+#             */
/*   Updated: 2018/12/22 18:47:05 by cchi             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./libft/libft.h"
#include <fcntl.h>
#include <stdlib.h>
#include <stdio.h>
int	get_next_line(const int fd, char **line);

int	main(int argc, char **argv)
{
	char	*line;
	int		fd;
	int		i;

	if (argc == 1)
		return (0);
	fd = open(argv[1], O_RDONLY);
	i = 0;
	while ((i = get_next_line(fd, &line) == 1))
	{
		ft_putendl(line);
		free(line);
	}
	return (0);
}
