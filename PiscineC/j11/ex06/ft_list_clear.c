/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_clear.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhervieu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/15 23:21:04 by jhervieu          #+#    #+#             */
/*   Updated: 2018/08/18 18:45:50 by jhervieu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_list.h"

void	ft_list_clear(t_list **begin_list)
{
	if (*begin_list == NULL)
	{
		return ;
	}
	if ((*begin_list)->next != NULL)
	{
		ft_list_clear(&((*begin_list)->next));
	}
	free(*begin_list);
	*begin_list = NULL;
}
