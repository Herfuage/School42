/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_reverse_fun.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhervieu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/16 22:04:01 by jhervieu          #+#    #+#             */
/*   Updated: 2018/08/16 23:34:55 by jhervieu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_list.h"

void	ft_list_reverse_fun(t_list *begin_list)
{
	t_list	*cursor1;
	t_list	*cursor2;
	void	*temp;

	if (begin_list == NULL || begin_list->next == NULL)
	{
		return ;
	}
	cursor2 = begin_list;
	while (cursor2->next != NULL)
	{
		cursor2 = cursor2->next;
	}
	cursor1 = begin_list;
	while (cursor1 != cursor2 && cursor1 != cursor2->next)
	{
		temp = cursor1->data;
		cursor1->data = cursor2->data;
		cursor2->data = temp;
		cursor2 = ft_list_prev(begin_list, cursor2);
		cursor1 = cursor1->next;
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
