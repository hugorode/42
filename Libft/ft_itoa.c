/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hrode <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/17 11:45:46 by hrode             #+#    #+#             */
/*   Updated: 2022/02/05 15:11:19 by hrode            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

long int	length(long int c)
{
	unsigned long	i;

	i = 0;
	if (c == 0)
		return (1);
	if (c < 0)
		i = 1;
	while (c != 0)
	{
		c = c / 10;
		i++;
	}
	return (i);
}

char	*ft_itoa(int n)
{
	int		l;
	char	*a;

	l = length(n);
	if (n == -2147483648)
		return (ft_strdup("-2147483648"));
	a = (char *)malloc(sizeof(char) * (l + 1));
	if (!a)
		return (0);
	if (n == 0)
		a[0] = '0';
	if (n < 0)
	{
		a[0] = '-';
		n = n * -1;
	}
	a[l--] = '\0';
	while (n > 0)
	{
		a[l] = n % 10 + 48;
		l--;
		n = n / 10;
	}
	return (a);
}
