/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hrode <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/03 15:58:46 by hrode             #+#    #+#             */
/*   Updated: 2022/02/04 20:08:57 by hrode            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

size_t	ft_strlen(char *c);

char	*ft_strrchr(const char *s, int c)
{
	unsigned long	a;

	a = ft_strlen((char *)s);
	while (a > 0)
	{
		if ((unsigned char)s[a] == (unsigned char)c)
			return ((char *)s + a);
		a--;
	}
	if ((unsigned char)s[a] == (unsigned char)c)
		return ((char *)s + a);
	return (0);
}
