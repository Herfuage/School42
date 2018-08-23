/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhervieu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/05 16:00:17 by jhervieu          #+#    #+#             */
/*   Updated: 2018/08/05 19:39:12 by jhervieu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);
void	ft_print_digits(int nb);

void	ft_putnbr(int nb)
{
	if (nb == 0)
	{
		ft_putchar('0');
	}
	if (nb == -2147483648)
	{
		ft_putchar('-');
		ft_putchar('2');
		nb = nb % 1000000000;
		nb = -nb;
	}
	if (nb < 0)
	{
		ft_putchar('-');
		nb = -nb;
	}
	ft_print_digits(nb);
}

void	ft_print_digits(int nb)
{
	int digit;
	int pow;
	int disp_zero;

	disp_zero = 0;
	pow = 1000000000;
	while (pow > 0)
	{
		digit = nb / pow;
		if (digit > 0)
		{
			disp_zero = 1;
			ft_putchar(digit + '0');
		}
		else if (disp_zero == 1)
		{
			ft_putchar('0');
		}
		nb = nb % pow;
		pow = pow / 10;
	}
}
