/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hrode <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/06 16:43:14 by hrode             #+#    #+#             */
/*   Updated: 2022/02/05 15:48:29 by hrode            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	unsigned int	i;
	unsigned int	j;
	char			*str;

	if (!s)
		return (NULL);
	if (start > ft_strlen((char *)s))
		start = ft_strlen((char *)s);
	if (ft_strlen(start + (char *)s) < len)
		len = ft_strlen(start + (char *)s);
	str = malloc(sizeof(char) * (len + 1));
	if (!str)
		return (NULL);
	i = start;
	j = 0;
	if (start < ft_strlen((char *)s))
	{
		while (i < start + len && s[i] != '\0')
			str[j++] = s[i++];
	}
	str[j] = '\0';
	return (str);
}
