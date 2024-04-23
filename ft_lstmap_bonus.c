/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: valarcon <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/31 13:55:01 by valarcon          #+#    #+#             */
/*   Updated: 2022/01/31 13:55:03 by valarcon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static t_list	*ft_lstclear_null(t_list **lst, void (*del)(void *))
{
	t_list	*aux;
	t_list	*aux2;

	aux2 = *lst;
	while (aux2)
	{
		aux = aux2;
		aux2 = aux->next;
		(*del)(aux->content);
		free (aux);
	}
	*lst = 0;
	return (*lst);
}

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*aux[5];

	aux[3] = 0;
	aux[0] = lst;
	if (!lst)
		return (0);
	while (aux[0] && f)
	{
		aux[2] = ft_lstnew((*f)(aux[0]->content));
		if (aux[3]++ == 0)
		{
			aux[4] = aux[2];
			aux[1] = aux[4];
		}
		else
		{
			aux[1]->next = aux[2];
			aux[1] = aux[2];
		}
		if (!aux[2])
			return (ft_lstclear_null(&(aux[4]), (*del)));
		aux[0] = aux[0]->next;
	}
	return (aux[4]);
}
