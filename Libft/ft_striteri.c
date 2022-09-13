/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hrode <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/17 15:08:11 by hrode             #+#    #+#             */
/*   Updated: 2022/02/02 14:51:44 by hrode            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

size_t	ft_strlen(char *c);

void	ft_striteri(char *s, void (*f)(unsigned int, char *))
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	if (s != 0 && f != 0)
		i = ft_strlen(s);
	while (j < i)
	{
		f(j, s);
		s++;
		j++;
	}
}
