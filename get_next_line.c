#include "get_next_line.h"
#include <stdlib.h>

static char	*malloccpytoline(char *str)
{
	char	*linestr;
	int	k;
	int	i;

	k = 0;
	i = 0;
	while (str[i] != '\n')
		i++;
	if (!(linestr = (char*)malloc(sizeof(char) * (i + 1))))
		return (0);
	while (k < i)
	{
		linestr[k] = str[k];
		k++;
	}
	linestr[k] = '\0';
	return (linestr);
}

static char	*emptystr(char **line, char *str)
{
	int	i;
	int	j;
	char	*temp;

	j = ft_strlen(str);
	i = ft_strlen(*line);
	while (str[i] == '\n')
		i++;
	temp = ft_strsub(str, i, j - i);
	ft_strdel(&str);
	str = temp;
	ft_strdel(&temp);
	return (str);	
}

int	get_next_line(const int fd, char **line)
{
	char	buf[BUFF_SIZE];
	static char	*str;
	int		nbread;
	char		*s;

	if (!str)
		str = ft_strnew(0);
	if ((s = ft_strchr(str, '\n')) != 0 && *(s - 1) != '\n')
	{
		*line = malloccpytoline(str);	
		str = emptystr(line, str);
		return (1);
	}
	while ((nbread = read(fd, buf, BUFF_SIZE)) > 0)
	{
		buf[nbread] = '\0';
		str = ft_strjoin(str, buf);	
		if (str[0] == '\n')
			str[0] = str[1];
		if ((s = ft_strchr(str, '\n')) != 0 && *(s - 1) != '\n')
		{
			*line = malloccpytoline(str);
			str = emptystr(line, str);
			return (1);
		}
	}
	return (0);
}
