#include "get_next_line.h"

static char	*malloccpytoline(char *str)
{
	char	*linestr;
	int	i;

	i = 0;
	linestr = NULL;
	while (str[i] != '\n')
		i++;
	if (!(linestr = (char*)malloc(sizeof(char) * (i + 1))))
		return (0);
	linestr = ft_strncpy(linestr, str, i);
	linestr[i] = '\0';
	return (linestr);
}

static char	*emptystr(char **line, char *str)
{
	int	i;
	int	j;
	char	*temp;

	i = 0;
	j = 0;
	temp = NULL;
	i = ft_strlen(*line);
	temp = ft_strdup(&str[i + 1]);
	ft_strdel(&str);
	str = temp;
	return (str);	
}

char	*emptyn(char *str)
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
			str = "";
	}
	return (str);
}

/*static char	*readandstock(const int fd, char *str, char buf[BUFF_SIZE], char **line)
{
	int	nbread;
	char	*temp;

	temp = NULL;
	nbread = 0;
	if (ft_strchr(str, '\n'))
	{
		while (str[0] == '\n')
			str = emptyn(str);
		*line = malloccpytoline(str);
		str = emptystr(line, str);
		return (str);
	}
	while ((nbread = read(fd, buf, BUFF_SIZE)) > 0)
	{
		buf[nbread] = '\0';
		temp = ft_strjoin(str, buf);
		ft_strdel(&str);
		str = temp;
		while (str[0] == '\n')
			str = emptyn(str);
		if (ft_strchr(str, '\n') != 0)
			break ;
	}
	return (0);
}
*/
int	get_next_line(const int fd, char **line)
{
	char	buf[BUFF_SIZE];
	static char	*str = NULL;

	if (!str)
		str = ft_strnew(0);
	if (str)
	{
		str = readandstock(fd, str, buf, line);
		if (ft_strlen(*line) > 0)
			return (1);
	}
	if (nbread == 0 && ft_strlen(str) == 0)
		return (0);
	return (0);
}

//nbread == 0?? finir la fin; strlen == 0??
