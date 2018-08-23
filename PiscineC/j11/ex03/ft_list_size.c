/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_size.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhervieu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/15 19:07:56 by jhervieu          #+#    #+#             */
/*   Updated: 2018/08/16 23:28:02 by jhervieu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_list.h"

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
