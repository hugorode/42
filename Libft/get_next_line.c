/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hrode <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/13 14:20:39 by hrode             #+#    #+#             */
/*   Updated: 2022/11/12 14:47:33 by hrode            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

#include <stdlib.h>
#include <unistd.h>

void	free_malloc(char **str, char **str2)
{
	if (str && *str)
	{
		free(*str);
		*str = NULL;
	}
	if (str2 && *str2)
	{
		free(*str2);
		*str2 = NULL;
	}
}

char	*cleand(char *stash)
{
	int		i;
	char	*newline;

	if (!stash)
		return (NULL);
	i = 0;
	while (stash[i] && stash[i] != '\n')
		i++;
	if (stash[i] && stash[i] == '\n')
		i++;
	newline = ft_substr(stash, 0, i);
	return (newline);
}

char	*readr(int fd, char *stash)
{
	char	*buf;
	int		ind;
	int		cpt;

	buf = malloc(sizeof(char) * (BUFFER_SIZE + 1));
	if (!buf)
		return (NULL);
	ind = 0;
	cpt = 1;
	while (!ind && cpt > 0)
	{
		cpt = read(fd, buf, BUFFER_SIZE);
		if (cpt == -1)
			return (free(buf), free(stash), NULL);
		buf[cpt] = '\0';
		stash = ft_strjoin(stash, buf);
		if (is_return(stash) == 1)
			ind = 1;
	}
	free(buf);
	return (stash);
}

char	*get_next_line(int fd)
{
	static char	*stash;
	char		*line;

	line = NULL;
	if (fd < 0 || BUFFER_SIZE < 1 || read(fd, NULL, 0) == -1)
		return (NULL);
	stash = readr(fd, stash);
	line = cleand(ft_strdup(stash));
	stash = ft_substr(stash, ft_strlen(line),
			ft_strlen(stash) - ft_strlen(line));
	if (!line || *line == '\0')
	{
		free_malloc(&stash, &line);
		return (NULL);
	}
	return (line);
}
