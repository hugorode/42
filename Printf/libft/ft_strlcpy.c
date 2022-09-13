/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hrode <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/04 22:55:23 by hrode             #+#    #+#             */
/*   Updated: 2022/02/05 11:21:32 by hrode            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	i;

	i = 0;
	if (size < 1)
		return (ft_strlen((char *)src));
	while (i < size - 1 && ((char *)src)[i] != '\0')
	{
		dst[i] = ((char *)src)[i];
		i++;
	}
	dst[i] = '\0';
	return (ft_strlen((char *)src));
}
