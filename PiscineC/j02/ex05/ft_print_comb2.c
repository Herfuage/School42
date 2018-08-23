/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhervieu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/02 17:46:56 by jhervieu          #+#    #+#             */
/*   Updated: 2018/08/02 17:50:43 by jhervieu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_putchar(char c);
void	ft_print_numbers(int n, int m);

void	ft_print_comb2(void)
{
	int n;
	int m;

	n = 0;
	m = 2;
	ft_print_numbers(0, 1);
	while (n < 99)
	{
		while (m < 100)
		{
			ft_putchar(',');
			ft_putchar(' ');
			ft_print_numbers(n, m);
			m = m + 1;
		}
		n = n + 1;
		m = n + 1;
	}
}

void	ft_print_numbers(int n, int m)
{
	ft_putchar(n / 10 + '0');
	ft_putchar(n % 10 + '0');
	ft_putchar(' ');
	ft_putchar(m / 10 + '0');
	ft_putchar(m % 10 + '0');
}
