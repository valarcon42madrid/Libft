/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: valarcon <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/31 13:25:20 by valarcon          #+#    #+#             */
/*   Updated: 2022/01/31 13:25:23 by valarcon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*aux;
	t_list	*aux2;

	aux = *lst;
	aux2 = aux;
	if (new)
	{
		if (!aux)
		{
			*lst = new;
		}
		else
		{
			if (new)
			{
				while (aux)
				{
					aux2 = aux;
					aux = aux->next;
				}
			}
			aux2->next = new;
		}
	}
}
