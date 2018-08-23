/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhervieu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/18 13:39:48 by jhervieu          #+#    #+#             */
/*   Updated: 2018/08/19 22:26:51 by jhervieu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "evalexpr.h"

int		main(int ac, char **av)
{
	if (ac > 1)
	{
		ft_putnbr(eval_expr(av[1]));
		ft_putchar('\n');
	}
	return (0);
}

int		eval_expr(char *str)
{
	int start;

	start = -1;
	return (read_expr(str, &start));
}

int		read_expr(char *str, int *start)
{
	t_link	*expr;
	int		waiting_op;
	int		i;

	expr = NULL;
	waiting_op = 0;
	i = *start + 1;
	while (str[i] != '\0' && str[i] != ')')
	{
		if (str[i] == '(')
			link_push_back(&expr, 'N', read_expr(str, &i));
		else if (str[i] == ' ')
			waiting_op = 1 - waiting_op;
		else if (waiting_op == 1)
			link_push_back(&expr, str[i], 0);
		else
			link_push_back(&expr, 'N', ft_atoi(str, &i));
		i = i + 1;
	}
	*start = i;
	return (calc_expr(expr));
}

int		calc_expr(t_link *expr)
{
	t_link	*cursor;
	int		result;

	cursor = expr;
	while (cursor != NULL)
	{
		while (cursor != NULL && cursor->op != '*'
			&& cursor->op != '/' && cursor->op != '%')
		{
			cursor = cursor->next;
		}
		if (cursor != NULL)
			link_merge(&cursor);
	}
	cursor = expr;
	while (cursor != NULL)
	{
		while (cursor != NULL && cursor->op != '+' && cursor->op != '-')
			cursor = cursor->next;
		if (cursor != NULL)
			link_merge(&cursor);
	}
	result = expr->nbr;
	link_clear(expr);
	return (result);
}
