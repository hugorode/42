/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hrode <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/03 11:51:55 by hrode             #+#    #+#             */
/*   Updated: 2022/02/05 19:54:54 by hrode            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = ft_strlen(dst);
	if (size <= 0)
		return (ft_strlen(src));
	if (size < ft_strlen(dst))
		return (size + ft_strlen(src));
	while (i + j < size - 1)
	{
		dst[i + j] = src[i];
		if (src[i] == '\0')
			return (i + j);
		i++;
	}
	dst[i + j] = '\0';
	if (j > size)
		return (size + ft_strlen(src));
	return (j + ft_strlen(src));
}
