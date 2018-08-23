/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   link.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhervieu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/19 19:46:22 by jhervieu          #+#    #+#             */
/*   Updated: 2018/08/19 22:16:02 by jhervieu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "evalexpr.h"

void	link_merge(t_link **link)
{
	t_link	*prev;
	t_link	*next;

	prev = (*link)->prev;
	next = (*link)->next;
	prev->nbr = ft_operator((*link)->op, prev->nbr, next->nbr);
	prev->next = next->next;
	if (next->next != NULL)
	{
		next->next->prev = prev;
	}
	*link = prev;
}

void	link_push_back(t_link **expr, char op, int nbr)
{
	t_link	*last;
	t_link	*cursor;

	cursor = *expr;
	if (*expr != NULL)
	{
		while (cursor->next != NULL)
			cursor = cursor->next;
	}
	last = (t_link*)malloc(sizeof(*last));
	if (last != NULL)
	{
		last->next = NULL;
		last->prev = cursor;
		last->op = op;
		last->nbr = nbr;
		if (*expr != NULL)
			cursor->next = last;
		else
			*expr = last;
	}
}

void	link_clear(t_link *expr)
{
	if (expr != NULL)
	{
		link_clear(expr->next);
	}
	free(expr);
}
