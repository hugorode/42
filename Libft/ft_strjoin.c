/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hrode <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/09 11:29:31 by hrode             #+#    #+#             */
/*   Updated: 2022/02/05 18:58:10 by hrode            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	unsigned long		i;
	char				*a;
	unsigned long		j;
	unsigned long		k;

	if (!s1 || !s2)
		return (0);
	i = ft_strlen((char *)s1) + ft_strlen((char *)s2);
	a = (char *)malloc(i * sizeof(char) + 1);
	if (!a)
		return (0);
	j = 0;
	while (s1[j])
	{
		a[j] = s1[j];
		j++;
	}
	k = j;
	j = 0;
	while (s2[j])
		a[k++] = s2[j++];
	a[k] = '\0';
	return (a);
}
