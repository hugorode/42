#include "get_next_line.h"

char    *joinfree(char *buffer, char *buf)
{
char    *temp;
 
temp = ft_strjoin(buffer, buf);
free(buffer);
return (temp);
}


char	*new_stash(char *stash)
{
	char	*str;
	int	i;
	int	j;
	
	i = 0;
	j = 0;
	while (stash[i] && stash[i] != '\n')
		i++;
	if (!stash[i])
	{
		free(stash);
		return(NULL);
	}
	str = ft_calloc(sizeof(char), (ft_strlen(stash) - i + 1));
	i++;
	while (stash[i])
		str[j++] = stash[i++];
	free (stash);
	return (str);
}

char	*clean(char *stash)
{
	char	*str;
	int	i;

	i = 0;
	if (!stash[i])
		return (NULL);
	while (stash[i] && stash[i] != '\n')
		i++;
	str = ft_calloc(sizeof(char), i + 2);
	i = 0;
	while (stash[i] && stash[i] != '\n')
	{
		str[i] = stash[i];
		i++;
	}
	if (stash[i] == '\n')
	{
		str[i] = '\n';
		i++;
	}
	return (str);
}

char	*readr(int fd, char *stash)
{
	char	*buf;
	int	cpt;
	int	ind;

	ind = 0;
	cpt = 1;
	if (!stash)
		stash = ft_calloc(1,1);		
	buf = ft_calloc(sizeof(char), (BUFFER_SIZE + 1));
	while(ind == 0 && cpt > 0)
	{
		cpt = read(fd, buf, BUFFER_SIZE);
		if (cpt == -1)
		{
			free(buf);
			return (NULL);
		}
		buf[cpt]='\0';
		stash = joinfree(stash, buf);
		if (is_return(buf) == 1)
			ind = 1;
	}
	free(buf);
	return (stash);	
}

char	*get_next_line(int fd)
{
	static char	*stash;
	char		*line;

	if (fd < 0 || BUFFER_SIZE <= 0 || read(fd, 0, 0) < 0)
		return (NULL);

	stash = readr(fd, stash);
	if (!stash)
		return (NULL);
	line = clean(stash);
	stash = new_stash(stash);
	return (line);
}
