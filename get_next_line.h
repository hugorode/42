#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

#include <unistd.h>
#include <stdlib.h>

void	*ft_calloc(size_t count, size_t size);
void	ft_bzero(void *s, size_t n);
char	*get_next_line(int fd);
size_t	ft_strlen(const char *s);
char	*ft_strjoin(const char *s1, const char *s2);
int	is_return(const char *s);
char	*ft_strdup(const char *s);
char	*ft_strchr(const char *s, int c);

#endif
