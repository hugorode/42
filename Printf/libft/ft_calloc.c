/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hrode <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/06 14:38:51 by hrode             #+#    #+#             */
/*   Updated: 2022/02/05 15:17:55 by hrode            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void		*a;
	long int	i;

	i = count * size;
	a = (void *)malloc(i);
	if (a == 0)
		return (0);
	ft_bzero(a, i);
	return (a);
}
