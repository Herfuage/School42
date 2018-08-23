/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhervieu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/14 16:48:43 by jhervieu          #+#    #+#             */
/*   Updated: 2018/08/16 18:07:16 by jhervieu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_doop.h"

int		main(int argc, char **argv)
{
	char	op[5];
	int		b;
	int		(*f[5])(int, int);

	ft_init(op, f);
	if (argc != 4 || ft_op_index(argv[2], op) < 0)
		write(1, "0\n", 2);
	else
	{
		b = ft_atoi(argv[3]);
		if (ft_op_index(argv[2], op) == 3 && b == 0)
			write(1, "Stop : division by zero\n", 24);
		else if (ft_op_index(argv[2], op) == 4 && b == 0)
			write(1, "Stop : modulo by zero\n", 22);
		else
		{
			ft_putnbr(f[ft_op_index(argv[2], op)](ft_atoi(argv[1]), b));
			write(1, "\n", 1);
		}
	}
	return (0);
}

void	ft_init(char *op, int (*f[5])(int, int))
{
	op[0] = '+';
	op[1] = '-';
	op[2] = '*';
	op[3] = '/';
	op[4] = '%';
	f[0] = &ft_add;
	f[1] = &ft_diff;
	f[2] = &ft_times;
	f[3] = &ft_div;
	f[4] = &ft_modulo;
}

int		ft_op_index(char *str, char *op)
{
	int		i;

	i = 0;
	while (str[i] != '\0')
	{
		i = i + 1;
	}
	if (i != 1)
		return (-1);
	i = 0;
	while (i < 5)
	{
		if (str[0] == op[i])
			return (i);
		i = i + 1;
	}
	return (-1);
}

int		ft_atoi(char *str)
{
	int n;
	int s;
	int i;

	i = 0;
	n = 0;
	s = 1;
	while ((str[i] >= 9 && str[i] < 13) || str[i] == ' ')
	{
		i = i + 1;
	}
	if (str[i] == '+' || str[i] == '-')
	{
		s = 44 - str[i];
		i = i + 1;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		n = n * 10 + str[i] - '0';
		i = i + 1;
	}
	return (n * s);
}

void	ft_putnbr(int n)
{
	char c;

	if (n == -2147483648)
	{
		write(1, "-2147483648", 11);
		return ;
	}
	if (n < 0)
	{
		write(1, "-", 1);
		n = -n;
	}
	if (n < 10)
	{
		c = n + '0';
		write(1, &c, 1);
		return ;
	}
	ft_putnbr(n / 10);
	c = n % 10 + '0';
	write(1, &c, 1);
}
