/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_reverse.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhervieu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/16 11:20:46 by jhervieu          #+#    #+#             */
/*   Updated: 2018/08/16 23:31:54 by jhervieu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_list.h"

void	ft_list_reverse(t_list **begin_list)
{
	t_list	*last;

	if ((*begin_list) == NULL || (*begin_list)->next == NULL)
	{
		return ;
	}
	last = ft_list_rev_next(&((*begin_list)->next));
	(*begin_list)->next->next = *begin_list;
	(*begin_list)->next = NULL;
	*begin_list = last;
}

t_list	*ft_list_rev_next(t_list **begin_list)
{
	t_list	*last;

	if ((*begin_list)->next == NULL)
	{
		return (*begin_list);
	}
	last = ft_list_rev_next(&((*begin_list)->next));
	(*begin_list)->next->next = *begin_list;
	return (last);
}
