/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_at.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhervieu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/16 00:18:36 by jhervieu          #+#    #+#             */
/*   Updated: 2018/08/21 02:13:33 by jhervieu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_list.h"

t_list	*ft_list_at(t_list *begin_list, unsigned int nbr)
{
	if (nbr > (unsigned int)ft_list_size(begin_list))
	{
		return (NULL);
	}
	while (nbr > 0)
	{
		begin_list = begin_list->next;
		nbr = nbr - 1;
	}
	return (begin_list);
}

int		ft_list_size(t_list *begin_list)
{
	t_list	**cursor;
	int		n;

	if (begin_list == NULL)
	{
		return (0);
	}
	cursor = &begin_list;
	n = 1;
	while ((*cursor)->next != NULL)
	{
		cursor = &((*cursor)->next);
		n = n + 1;
	}
	return (n);
}
