/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_find.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhervieu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/16 14:09:07 by jhervieu          #+#    #+#             */
/*   Updated: 2018/08/16 22:45:08 by jhervieu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_list.h"

t_list	*ft_list_find(t_list *begin_list, void *data_ref, int (*cmp)())
{
	t_list	**cursor;

	if (begin_list != NULL)
	{
		cursor = &begin_list;
		while ((*cursor)->next != NULL)
		{
			if ((*cmp)((*cursor)->data, data_ref) == 0)
			{
				return (*cursor);
			}
			cursor = &((*cursor)->next);
		}
		if ((*cmp)((*cursor)->data, data_ref) == 0)
		{
			return (*cursor);
		}
	}
	return (NULL);
}
