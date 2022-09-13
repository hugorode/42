/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hrode <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/25 15:35:44 by hrode             #+#    #+#             */
/*   Updated: 2022/02/05 17:44:21 by hrode            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

void	*ft_memcpy(void	*d, const void *s, size_t n)
{
	unsigned char	*a;
	unsigned char	*b;

	if (!d && !s)
		return (NULL);
	a = (unsigned char *)d;
	b = (unsigned char *)s;
	while (n > 0)
	{
		a[n - 1] = b[n - 1];
		n--;
	}
	return (d);
}
