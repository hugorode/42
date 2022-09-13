/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hrode <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/09 11:40:52 by hrode             #+#    #+#             */
/*   Updated: 2022/02/05 19:03:12 by hrode            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	found(const char c, const char *set)
{
	unsigned long	i;

	i = 0;
	while (set[i])
	{
		if (set[i] == c)
			return (1);
		i++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	int		len;
	char	*a;
	long	i;
	long	j;
	long	k;

	if (!s1)
		return (0);
	i = 0;
	k = 0;
	len = 0;
	j = ft_strlen((char *)s1);
	while (i < j && found(s1[i], set) == 1)
		i++;
	while (j > 0 && found(s1[j - 1], set) == 1)
		j--;
	if (!(j - i < 0))
		len = j - i;
	a = (char *)malloc(sizeof(char) * (len + 1));
	if (!a)
		return (NULL);
	while (i < j)
		a[k++] = s1[i++];
	a[k] = '\0';
	return (a);
}
