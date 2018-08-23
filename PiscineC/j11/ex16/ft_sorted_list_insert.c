/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sorted_list_insert.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhervieu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/16 22:05:47 by jhervieu          #+#    #+#             */
/*   Updated: 2018/08/16 22:50:49 by jhervieu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_list.h"

void	ft_sorted_list_insert(t_list **begin_list, void *data, int (*cmp)())
{
	t_list	*cursor;
	t_list	*list;
	t_list	*prev;

	cursor = *begin_list;
	while (cursor != NULL && (*cmp)(cursor->data, data) < 0)
	{
		cursor = cursor->next;
	}
	list = ft_create_elem(data);
	if (list != NULL)
	{
		prev = ft_list_prev(*begin_list, cursor);
		if (prev == NULL)
		{
			*begin_list = list;
		}
		else
		{
			prev->next = list;
		}
		list->next = cursor;
	}
}

t_list	*ft_list_prev(t_list *begin_list, t_list *list)
{
	if (begin_list == list || begin_list == NULL)
	{
		return (NULL);
	}
	while (begin_list->next != list)
	{
		begin_list = begin_list->next;
	}
	return (begin_list);
}
