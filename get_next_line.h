#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

#include <unistd.h>
#include <stdlib.h>


char    *get_next_line(int fd);
size_t	ft_strlen(char *s);
char    *ft_strjoin(char *s1, char *s2);
int     is_return(char *s);
char    *ft_strdup(const char *s);
char    *ft_strchr(const char *s, int c);

#endif
