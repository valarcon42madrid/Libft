/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: valarcon <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/31 13:34:32 by valarcon          #+#    #+#             */
/*   Updated: 2022/01/31 13:34:34 by valarcon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	int		i;
	int		bol;
	t_list	*aux;

	i = 0;
	bol = 1;
	aux = lst;
	if (!lst)
		return (0);
	while (bol == 1)
	{
		if (aux->next != 0)
			aux = aux->next;
		else
			bol = 0;
		i++;
	}
	return (i);
}
