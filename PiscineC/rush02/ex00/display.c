/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   display.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhervieu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/19 17:55:46 by jhervieu          #+#    #+#             */
/*   Updated: 2018/08/19 18:07:35 by jhervieu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush.h"

int		ft_display(int ex, int x, int y, int *match)
{
	char c;

	if (*match == 1)
	{
		write(1, " || ", 4);
	}
	*match = 1;
	write(1, "[colle-0", 8);
	c = ex + '0';
	write(1, &c, 1);
	write(1, "] [", 3);
	ft_putnbr(x);
	write(1, "] [", 3);
	ft_putnbr(y);
	write(1, "]", 1);
	return (1);
}

void	ft_putnbr(int nbr)
{
	char c;

	if (nbr > 10)
	{
		ft_putnbr(nbr / 10);
	}
	c = nbr % 10 + '0';
	write(1, &c, 1);
}

int		ft_no_result(int status)
{
	if (status == 0)
	{
		write(1, "aucune\n", 7);
	}
	else
	{
		write(1, "Not enough memory for malloc\n", 29);
	}
	return (0);
}
