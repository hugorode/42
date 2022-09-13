/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_treat_xx.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hrode <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/25 11:07:50 by hrode             #+#    #+#             */
/*   Updated: 2022/07/25 11:08:56 by hrode            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"

int	ft_treat_xx(unsigned int x)
{
	ft_putnbr_base_fd(x, "0123456789ABCDEF", 1);
	return (ft_uint_len_base(x, "0123456789ABCDEF"));
}
