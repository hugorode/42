/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_uint_len_base.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hrode <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/25 11:00:38 by hrode             #+#    #+#             */
/*   Updated: 2022/07/25 11:10:26 by hrode            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft/libft.h"

int	ft_uint_len_base(long long unsigned int n, char *base)
{
	int	len;
	int	len_base;

	len_base = ft_strlen(base);
	len = 0;
	if (n == 0)
		return (1);
	while (n > 0)
	{
		n /= len_base;
		len++;
	}
	return (len);
}
