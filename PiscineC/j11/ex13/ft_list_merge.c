/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_merge.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhervieu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/16 15:17:03 by jhervieu          #+#    #+#             */
/*   Updated: 2018/08/16 22:45:36 by jhervieu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_list.h"

void	ft_list_merge(t_list **begin_list1, t_list *begin_list2)
{
	t_list	*cursor;

	if (begin_list2 == NULL)
	{
		return ;
	}
	if (*begin_list1 == NULL)
	{
		*begin_list1 = begin_list2;
		return ;
	}
	cursor = *begin_list1;
	while (cursor->next != NULL)
	{
		cursor = cursor->next;
	}
	cursor->next = begin_list2;
}
