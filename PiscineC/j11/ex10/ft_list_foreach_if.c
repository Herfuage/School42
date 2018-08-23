/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_foreach.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhervieu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/16 11:23:27 by jhervieu          #+#    #+#             */
/*   Updated: 2018/08/21 01:50:46 by jhervieu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_list.h"

void	ft_list_foreach_if(t_list *begin_list, void (*f)(void *),
						void *data_ref, int (*cmp)())
{
	t_list	**cursor;

	if (begin_list != NULL)
	{
		cursor = &begin_list;
		while ((*cursor)->next != NULL)
		{
			if ((*cmp)((*cursor)->data, data_ref) == 0)
			{
				(*f)((*cursor)->data);
			}
			cursor = &((*cursor)->next);
		}
		if ((*cmp)((*cursor)->data, data_ref) == 0)
		{
			(*f)((*cursor)->data);
		}
	}
}
