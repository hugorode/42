/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hrode <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/25 10:53:28 by hrode             #+#    #+#             */
/*   Updated: 2022/07/25 11:12:00 by hrode            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printf(const char *format, ...)
{
	int		i;
	va_list	args;
	int		nb_char_printed;

	i = 0;
	va_start(args, format);
	nb_char_printed = 0;
	while (format[i])
	{
		if (format[i] == '%')
		{
			if (ft_is_format_ok(format[++i]))
				nb_char_printed += ft_path(format[i], args);
			else
			{
				write(1, "%", 1);
				write(1, &format[i], 1);
			}
		}
		else
			nb_char_printed += ft_putchar(format[i]);
		i++;
	}
	va_end(args);
	return (nb_char_printed);
}
