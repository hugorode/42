/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_treat_p.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hrode <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/25 11:05:40 by hrode             #+#    #+#             */
/*   Updated: 2022/07/25 11:06:02 by hrode            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "../ft_printf.h"

int	ft_treat_p(long long unsigned ptr)
{
	if (!ptr)
	{
		write(1, "(nil)", 5);
		return (5);
	}
	else
	{
		write(1, "0x", 2);
		ft_putnbr_base_fd(ptr, "0123456789abcdef", 1);
		return (ft_uint_len_base(ptr, "0123456789abcdef") + 2);
	}
}
