/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hrode <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/02 14:58:47 by hrode             #+#    #+#             */
/*   Updated: 2022/02/05 18:54:15 by hrode            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*ajout;

	ajout = malloc(sizeof(*ajout));
	if (!ajout)
		return (NULL);
	ajout->content = content;
	ajout->next = NULL;
	return (ajout);
}
