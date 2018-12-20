#include "get_next_line.h"

static char	*malloccpytoline(char *str)
{
	char	*linestr;
	int	i;

	i = 0;
	linestr = NULL;
	while (str[i] != '\n' && str[i])
		i++;
	if (!(linestr = (char*)malloc(sizeof(char) * (i + 1))))
		return (0);
	linestr[i] = '\0';
	while (i--)
		linestr[i] = str[i];
	return (linestr);
}

static char	*emptystr(char **line, char *str)
{
	int	i;
	char	*temp;

	i = 0;
	temp = NULL;
	i = ft_strlen(*line);
	if (str[i])
	{
		temp = ft_strdup(&str[i]);
		ft_strdel(&str);
		str = temp;
	}
	else
		temp = "";
		ft_strdel(&str);
		str = temp;
	return (str);	
}

static char	*emptyn(char *str)
{
	char	*temp;

	temp = NULL;
	if  (str[0] == '\n')
	{
		if (str[1])
		{
			temp = ft_strdup(&str[1]);
			ft_strdel(&str);
			str = temp;
		}
		else
			temp = "";
			ft_strdel(&str);
			str = temp;
	}
	return (str);
}

int	get_next_line(const int fd, char **line)
{
	char	buf[BUFF_SIZE + 1];
	static char	*str = NULL;
	int	nbread;
	char	*temp;

	temp = NULL;
	nbread = 0;
	if (fd < 0 || !BUFF_SIZE || read(fd, 0, 0) == -1)
		return (-1);
	if (!str)
		str = ft_strnew(0);
	if (str)
	{
		while ((nbread = read(fd, buf, BUFF_SIZE)) > 0)
		{
			buf[nbread] = '\0';
			temp = ft_strjoin(str, buf);
			ft_strdel(&str);
			str = temp;
			while (str[0] == '\n')
				str = ft_strdup(emptyn(str));
			if (ft_strchr(str, '\n'))
				break ;
		}
		if (nbread == 0 && ft_strlen(str) == 0)
			return (0);
		if (ft_strchr(str, '\n') != 0)
		{
			while (str[0] == '\n')
				str = ft_strdup(emptyn(str));
			*line = malloccpytoline(str);
			str = ft_strdup(emptystr(line, str));
		}
		if (!ft_strchr(str, '\n') && ft_strlen(str) > 0)
		{
			*line = ft_strdup(str);
			ft_strdel(&str);
		}
		if (ft_strlen(*line) > 0)
			return (1);
	}
	return (0);
}
