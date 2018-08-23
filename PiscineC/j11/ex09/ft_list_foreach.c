/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_foreach.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhervieu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/16 11:23:27 by jhervieu          #+#    #+#             */
/*   Updated: 2018/08/16 23:32:23 by jhervieu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_list.h"

void	ft_list_foreach(t_list *begin_list, void (*f)(void *))
{
	t_list	**cursor;

	if (begin_list != NULL)
	{
		cursor = &begin_list;
		while ((*cursor)->next != NULL)
		{
			(*f)((*cursor)->data);
			cursor = &((*cursor)->next);
		}
		(*f)((*cursor)->data);
	}
}
