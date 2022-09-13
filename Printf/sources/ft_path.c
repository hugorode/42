/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_path.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hrode <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/25 11:09:39 by hrode             #+#    #+#             */
/*   Updated: 2022/07/25 11:10:06 by hrode            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"

int	ft_path(char c, va_list args)
{
	if (c == 'c')
		return (ft_treat_c(va_arg(args, int)));
	else if (c == 's')
		return (ft_treat_s(va_arg(args, char *)));
	else if (c == 'p')
		return (ft_treat_p(va_arg(args, unsigned long long)));
	else if ((c == 'd') || (c == 'i'))
		return (ft_treat_d(va_arg(args, int)));
	else if (c == 'u')
		return (ft_treat_u(va_arg(args, unsigned int)));
	else if (c == 'x')
		return (ft_treat_x(va_arg(args, unsigned int)));
	else if (c == 'X')
		return (ft_treat_xx(va_arg(args, unsigned int)));
	else if (c == '%')
	{
		ft_putchar_fd('%', 1);
		return (1);
	}
	else
		return (0);
}
