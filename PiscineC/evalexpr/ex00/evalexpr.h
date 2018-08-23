/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   evalexpr.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhervieu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/18 13:48:25 by jhervieu          #+#    #+#             */
/*   Updated: 2018/08/19 22:16:56 by jhervieu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EVALEXPR_H
# define EVALEXPR_H

# include <unistd.h>
# include <stdlib.h>

typedef struct s_link	t_link;

struct	s_link
{
	t_link	*next;
	t_link	*prev;
	char	op;
	int		nbr;
};

void	ft_putchar(char c);

void	ft_putnbr(int nbr);

int		ft_operator(char op, int a, int b);

int		ft_atoi(char *str, int *start);

void	link_push_back(t_link **expr, char op, int nbr);

void	link_merge(t_link **link);

void	link_clear(t_link *expr);

int		eval_expr(char *str);

int		read_expr(char *str, int *start);

int		calc_expr(t_link *expr);

#endif
