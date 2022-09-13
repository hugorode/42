/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base_fd.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hrode <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/25 11:03:11 by hrode             #+#    #+#             */
/*   Updated: 2022/07/25 11:03:31 by hrode            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft/libft.h"

void	ft_putnbr_base_fd(long long unsigned n, char *base, int fd)
{
	unsigned int	len_base;

	len_base = ft_strlen(base);
	if (n >= len_base)
	{
		ft_putnbr_base_fd(n / len_base, base, fd);
		ft_putnbr_base_fd(n % len_base, base, fd);
	}
	if (n < len_base)
		ft_putchar_fd(base[n], fd);
}
