#include "get_next_line.h"

char	*new_stash(char *stash)
{
	char	*str;
	int	i;
	int	j;
	
	i = 0;
	j = 0;
	while (stash[i] && stash[i] != '\n')
		i++;
	str = malloc(sizeof(char) * (ft_strlen(stash) - i + 1));
	if (!str)
		return (0);
	i++;
	while (stash[i])
		str[j++] = stash[i++];
	str[j] = '\0';
	free (stash);
	return (str);
}

char	*cleand(char *stash)
{
	char	*str;
	int	i;

	i = 0;
	while (stash[i] != '\n')
		i++;
	str = malloc(sizeof(char) * (i + 1));
	if (!str)
		return (0);
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
	str[i] = '\0';
	return (str);
}

char	*readr(int fd, char *stash)
{
	char	*buf;
	int	ind;
	int	cpt;

	ind = 0;
	buf = malloc(sizeof(char) * (BUFFER_SIZE + 1));
		if(!buf)
			return (NULL);
	while(ind == 0)
	{
		cpt = read(fd, buf, BUFFER_SIZE);
		buf[cpt]='\0';
		if (is_return(buf) == 1 || cpt < BUFFER_SIZE)
			ind = 1;
		stash = ft_strjoin(stash, buf);
	}
	free(buf);
	return (stash);	
}

char	*get_next_line(int fd)
{
	static char	*stash;
	char		*line;

	if (fd < 0 || BUFFER_SIZE <= 0)
		return (0);

	stash = readr(fd, stash);
	if (!stash)
		return (0);
	line = cleand(stash);
	stash = new_stash(stash);
	return (line);
}
