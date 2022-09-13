/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hrode <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/02 16:16:34 by hrode             #+#    #+#             */
/*   Updated: 2022/02/05 19:09:08 by hrode            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*temp;
	t_list	*result;
	t_list	*next;

	if (!lst)
		return (0);
	temp = ft_lstnew(f(lst->content));
	if (!temp)
		return (NULL);
	next = lst->next;
	result = temp;
	while (next)
	{
		temp = ft_lstnew(f(next->content));
		if (!temp)
		{
			ft_lstclear(&result, del);
			return (NULL);
		}
		next = next->next;
		ft_lstadd_back(&result, temp);
	}
	return (result);
}
