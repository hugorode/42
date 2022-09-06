#include "get_next_line.h"


int	is_return(char *s)
{
	unsigned long int	i;

	i = 0;
	
	while(s[i])
	{
		if (s[i] == '\n')
		       return(1);	
		i++;
	}
	return(0);
}

size_t	ft_strlen(char *s)
{
	size_t	i;

	i = 0;
	while(s[i])
		i++;
	return(i);
}

char    *ft_strjoin(char *s1, char *s2)
{
        size_t  i;
        size_t  c;
        char    *str;

        if (!s1)
        {
                s1 = (char *)malloc(1 * sizeof(char));
                s1[0] = '\0';
        }
        if (!s1 || !s2)
                return (NULL);
        str = malloc((ft_strlen(s1) + ft_strlen(s2) + 1) * sizeof(char));
        if (str == NULL)
                return (NULL);
        i = -1;
        c = 0;
        if (s1)
                while (s1[++i] != '\0')
                        str[i] = s1[i];
        while (s2[c] != '\0')
                str[i++] = s2[c++];
        str[ft_strlen(s1) + ft_strlen(s2)] = '\0';
        free(s1);
        return (str);
}

