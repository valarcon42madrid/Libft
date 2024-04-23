/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: valarcon <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/31 13:26:31 by valarcon          #+#    #+#             */
/*   Updated: 2022/01/31 13:26:32 by valarcon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
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
}
