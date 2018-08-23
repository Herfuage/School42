/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_sort.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhervieu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/17 15:50:06 by jhervieu          #+#    #+#             */
/*   Updated: 2018/08/17 16:35:41 by jhervieu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_list.h"

void	ft_list_sort(t_list **begin_list, int (*cmp)())
{
	t_list	*cursor;
	void	*temp;
	int		n;
	int		i;

	n = ft_list_size(*begin_list);
	i = 0;
	while (i < n)
	{
		cursor = *begin_list;
		while (cursor->next != NULL)
		{
			if ((*cmp)(cursor->data, cursor->next->data) > 0)
			{
				temp = cursor->data;
				cursor->data = cursor->next->data;
				cursor->next->data = temp;
			}
			cursor = cursor->next;
		}
		i = i + 1;
	}
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
