/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sorted_list_merge.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhervieu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/16 22:49:08 by jhervieu          #+#    #+#             */
/*   Updated: 2018/08/16 23:36:28 by jhervieu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_list.h"

void	ft_sorted_list_merge(t_list **begin_list1,
						t_list *begin_list2, int (*cmp)())
{
	t_list	*cur1;
	t_list	*cur2;
	t_list	*prev;

	while (begin_list2 != NULL)
	{
		cur2 = begin_list2->next;
		cur1 = *begin_list1;
		while (cur1 != NULL && (*cmp)(cur1->data, begin_list2->data) < 0)
		{
			cur1 = cur1->next;
		}
		prev = ft_list_prev(*begin_list1, cur1);
		if (prev == NULL)
		{
			*begin_list1 = begin_list2;
		}
		else
		{
			prev->next = begin_list2;
		}
		begin_list2->next = cur1;
		begin_list2 = cur2;
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
