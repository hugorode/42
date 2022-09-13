/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hrode <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/25 10:54:55 by hrode             #+#    #+#             */
/*   Updated: 2022/07/25 11:12:49 by hrode            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include "libft/libft.h"
# include <stdarg.h>
# include <stdint.h>

int		ft_printf(const char *format, ...);
int		ft_is_format_ok(char c);
int		ft_path(char c, va_list args);
int		ft_treat_c(char c);
int		ft_treat_s(char *s);
int		ft_treat_p(long long unsigned ptr);
int		ft_treat_d(int d);
int		ft_treat_u(unsigned int u);
int		ft_treat_x(unsigned int x);
int		ft_treat_xx(unsigned int x);
int		ft_putchar(char c);
int		ft_uint_len_base(long long unsigned int n, char *base);
int		ft_int_len(int n);
void	ft_putnbr_base_fd(long long unsigned int n, char *base, int fd);
void	ft_putunbr_fd(unsigned int n, int fd);

#endif 
