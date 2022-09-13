/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hrode <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/06 16:38:38 by hrode             #+#    #+#             */
/*   Updated: 2022/02/04 23:36:16 by hrode            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	unsigned long	i;
	unsigned long	j;
	char			*a;

	i = 0;
	j = ft_strlen((char *)s);
	a = (char *)malloc(j * sizeof(char) + 1);
	if (!a)
		return (0);
	while (s[i])
	{
		a[i] = s[i];
		i++;
	}
	a[i] = '\0';
	return (a);
}
