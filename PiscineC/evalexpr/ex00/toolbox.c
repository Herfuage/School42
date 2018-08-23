/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   toolbox.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhervieu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/19 19:20:01 by jhervieu          #+#    #+#             */
/*   Updated: 2018/08/19 19:50:17 by jhervieu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "evalexpr.h"

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nbr)
{
	if (nbr == 0)
	{
		ft_putchar('0');
	}
	else if (nbr == -2147483648)
	{
		ft_putchar('-');
		ft_putchar('2');
		nbr = 147483648;
	}
	else if (nbr < 0)
	{
		ft_putchar('-');
		nbr = -nbr;
	}
	if (nbr > 10)
	{
		ft_putnbr(nbr / 10);
	}
	ft_putchar(nbr % 10 + '0');
}

int		ft_operator(char op, int a, int b)
{
	if (op == '+')
	{
		return (a + b);
	}
	if (op == '-')
	{
		return (a - b);
	}
	if (op == '*')
	{
		return (a * b);
	}
	if (op == '/')
	{
		return (a / b);
	}
	return (a % b);
}

int		ft_atoi(char *str, int *start)
{
	int i;
	int n;
	int s;

	n = 0;
	s = 1;
	i = *start;
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
		{
			s = -1;
		}
		i = i + 1;
	}
	while (str[i] != ' ' && str[i] != ')' && str[i] != '\0')
	{
		n = n * 10 + str[i] - '0';
		i = i + 1;
	}
	*start = i - 1;
	return (n * s);
}
