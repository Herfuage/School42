/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_remove_if.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhervieu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/16 14:38:38 by jhervieu          #+#    #+#             */
/*   Updated: 2018/08/19 13:51:42 by jhervieu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_list.h"

void	ft_list_remove_if(t_list **begin_list, void *data_ref, int (*cmp)())
{
	t_list	*cursor;

	cursor = *begin_list;
	while (cursor != NULL)
	{
		if ((*cmp)(cursor->data, data_ref) == 0)
		{
			ft_list_remove(begin_list, cursor);
		}
		cursor = cursor->next;
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

void	ft_list_remove(t_list **begin_list, t_list *list)
{
	t_list *prev;

	if (*begin_list == NULL || list == NULL)
	{
		return ;
	}
	if (*begin_list == list)
	{
		if (list->next != NULL)
			*begin_list = list->next;
		else
			*begin_list = NULL;
	}
	else
	{
		prev = ft_list_prev(*begin_list, list);
		prev->next = list->next;
	}
	free(list);
}
