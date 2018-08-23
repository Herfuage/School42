/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_push_back.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhervieu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/15 01:03:23 by jhervieu          #+#    #+#             */
/*   Updated: 2018/08/16 15:08:24 by jhervieu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_list.h"

void	ft_list_push_back(t_list **begin_list, void *data)
{
	t_list	*end_list;
	t_list	**cursor;

	if (*begin_list != NULL)
	{
		cursor = begin_list;
		while ((*cursor)->next != NULL)
		{
			cursor = &((*cursor)->next);
		}
	}
	end_list = ft_create_elem(data);
	if (end_list != NULL)
	{
		if (*begin_list != NULL)
		{
			(*cursor)->next = end_list;
		}
		else
		{
			*begin_list = end_list;
		}
	}
}
