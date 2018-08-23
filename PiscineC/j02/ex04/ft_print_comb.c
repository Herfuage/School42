/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhervieu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/02 14:41:24 by jhervieu          #+#    #+#             */
/*   Updated: 2018/08/02 14:43:14 by jhervieu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_putchar(char c);

void	ft_print_comb(void)
{
	int n;
	int d1;
	int d2;
	int d3;

	n = 13;
	ft_putchar('0');
	ft_putchar('1');
	ft_putchar('2');
	while (n < 790)
	{
		d1 = n / 100;
		d2 = (n % 100) / 10;
		d3 = n % 10;
		if (d1 < d2 && d2 < d3)
		{
			ft_putchar(',');
			ft_putchar(' ');
			ft_putchar(d1 + '0');
			ft_putchar(d2 + '0');
			ft_putchar(d3 + '0');
		}
		n = n + 1;
	}
}
