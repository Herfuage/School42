/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_push_params.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhervieu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/15 23:39:02 by jhervieu          #+#    #+#             */
/*   Updated: 2018/08/19 18:32:23 by jhervieu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_list.h"

t_list	*ft_list_push_params(int ac, char **av)
{
	int		i;
	t_list	*begin_list;

	begin_list = NULL;
	i = 0;
	while (i < ac)
	{
		ft_list_push_front(&begin_list, av[i]);
		i = i + 1;
	}
	return (begin_list);
}

void	ft_list_push_front(t_list **begin_list, void *data)
{
	t_list	*list;

	list = ft_create_elem(data);
	if (list)
	{
		list->next = *begin_list;
		*begin_list = list;
	}
}
