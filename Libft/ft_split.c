/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hrode <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/09 14:17:39 by hrode             #+#    #+#             */
/*   Updated: 2022/02/05 19:05:43 by hrode            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

unsigned long	word_count(const char *s, char c)
{
	unsigned long	i;
	unsigned long	cpt;

	i = 0;
	cpt = 0;
	while (s[i])
	{
		while (s[i] == c)
			i++;
		if (s[i])
		{
			cpt++;
			while (s[i] && s[i] != c)
				i++;
		}
	}
	return (cpt);
}

char	*word_length(const char *s, long int start, unsigned long end)
{
	char			*new;
	unsigned long	i;

	i = 0;
	new = malloc((end - start + 1) * sizeof(char));
	if (new == 0)
		return (0);
	while ((unsigned long)start < end)
	{
		new[i] = s[start];
		start++;
		i++;
	}
	new[i] = '\0';
	return (new);
}

char	**ft_split(char	const *s, char c)
{
	char			**a;
	unsigned long	i;
	unsigned long	j;
	long int		k;

	if (!s)
		return (0);
	a = malloc((word_count(s, c) + 1) * sizeof(char *));
	if (a == 0)
		return (0);
	i = -1;
	j = 0;
	k = -1;
	while (++i <= ft_strlen((char *)s))
	{
		if (s[i] != c && k == -1)
			k = i;
		else if ((s[i] == '\0' || s[i] == c) && k >= 0)
		{
			a[j++] = word_length(s, k, i);
			k = -1;
		}
	}
	a[j] = 0;
	return (a);
}
