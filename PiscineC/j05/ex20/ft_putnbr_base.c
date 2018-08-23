/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhervieu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/08 01:18:46 by jhervieu          #+#    #+#             */
/*   Updated: 2018/08/09 00:44:02 by jhervieu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);
void	ft_print_digits(int nbr, char *base, int base_size);
int		ft_strlen(char *str);
int		ft_pow_max(int base_size);
int		ft_check_base(char *base, int base_size);

void	ft_putnbr_base(int nbr, char *base)
{
	int		base_size;

	base_size = ft_strlen(base);
	if (ft_check_base(base, base_size) == 0)
	{
		return ;
	}
	if (nbr == 0)
	{
		ft_putchar(base[0]);
	}
	if (nbr == -2147483648)
	{
		ft_putchar('-');
		nbr = (nbr / base_size) * (-1);
		ft_print_digits(nbr, base, base_size);
		ft_putchar(base[2147483648 % base_size]);
		return ;
	}
	if (nbr < 0)
	{
		ft_putchar('-');
		nbr = -nbr;
	}
	ft_print_digits(nbr, base, base_size);
}

void	ft_print_digits(int nbr, char *base, int base_size)
{
	int		pow;
	int		digit;
	int		disp_zero;

	disp_zero = 0;
	pow = ft_pow_max(base_size);
	while (pow > 0)
	{
		digit = nbr / pow;
		if (digit != 0)
		{
			disp_zero = 1;
			ft_putchar(base[digit]);
		}
		else if (disp_zero == 1)
		{
			ft_putchar(base[0]);
		}
		nbr = nbr % pow;
		pow = pow / base_size;
	}
}

int		ft_strlen(char *str)
{
	int length;

	length = 0;
	while (str[length] != '\0')
	{
		length = length + 1;
	}
	return (length);
}

int		ft_pow_max(int base_size)
{
	int n;

	n = 1;
	while (n <= 2147483647 / base_size)
	{
		n = n * base_size;
	}
	return (n);
}

int		ft_check_base(char *base, int base_size)
{
	int i;
	int j;

	if (base_size < 2)
		return (0);
	i = 0;
	while (i < base_size - 1)
	{
		if (base[i] == '+' || base[i] == '-')
			return (0);
		j = i + 1;
		while (j < base_size)
		{
			if (base[i] == base[j])
				return (0);
			j = j + 1;
		}
		i = i + 1;
	}
	return (1);
}
