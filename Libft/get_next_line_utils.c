/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hrode <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/13 14:22:13 by hrode             #+#    #+#             */
/*   Updated: 2022/09/13 15:33:46 by hrode            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <unistd.h>

size_t	ft_strlen(const char *string)
{
	size_t	len;

	len = 0;
	if (!string)
		return (0);
	while (string && string[len])
		len++;
	return (len);
}

char	*ft_strdup(const char *s)
{
	size_t	str_len;
	size_t	i;
	char	*dup_str;

	str_len = ft_strlen(s);
	i = 0;
	dup_str = malloc(sizeof(char) * (str_len + 1));
	if (dup_str == NULL)
		return (NULL);
	if (!s)
		return (dup_str);
	while (s[i])
	{
		dup_str[i] = s[i];
		i++;
	}
	dup_str[i] = '\0';
	return (dup_str);
}

char	*ft_substr(char *s, unsigned int start, size_t len)
{
	char			*substr;
	unsigned int	i;

	if (!s)
		return (NULL);
	if (start > ft_strlen(s))
		return (free(s), ft_strdup(""));
	if (len > ft_strlen(s) - start)
		len = ft_strlen(s) - start;
	substr = malloc(sizeof(char) * (len + 1));
	if (substr == NULL)
		return (free(s), NULL);
	i = 0;
	while (s[start + i] && i < len)
	{
		substr[i] = s[start + i];
		i++;
	}
	substr[i] = '\0';
	free(s);
	return (substr);
}

char	*ft_strjoin(char *s1, char *s2)
{
	size_t	len_s1;
	size_t	len_s2;
	char	*join_str;
	size_t	i;

	if (!s1)
		s1 = ft_strdup("");
	len_s1 = ft_strlen(s1);
	len_s2 = ft_strlen(s2);
	join_str = malloc(sizeof(char) * (len_s1 + len_s2 + 1));
	if (!join_str)
		return (free(s1), NULL);
	i = 0;
	while (i < len_s1)
	{
		join_str[i] = s1[i];
		i++;
	}
	while (i < len_s1 + len_s2)
	{
		join_str[i] = s2[i - len_s1];
		i++;
	}
	join_str[i] = '\0';
	return (free(s1), join_str);
}

int	is_return(const char *s)
{
	int	i;

	i = 0;
	while (s[i])
	{
		if (s[i] == '\n')
			return (1);
		i++;
	}
	return (0);
}
