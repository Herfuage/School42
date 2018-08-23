/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhervieu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/05 10:13:12 by jhervieu          #+#    #+#             */
/*   Updated: 2018/08/07 18:50:09 by jhervieu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);
void	ft_print_digits(char *str, int from, int k, int n);
void	ft_putstr(char *str, int size);

void	ft_print_combn(int n)
{
	int		i;
	char	str[n];
	char	*digits;

	if (n == 1)
	{
		digits = "0, 1, 2, 3, 4, 5, 6, 7, 8, 9";
		ft_putstr(digits, 28);
		return ;
	}
	i = 0;
	while (i < 11 - n)
	{
		str[0] = i + '0';
		ft_print_digits(str, i + 1, n - 1, n);
		i = i + 1;
	}
}

void	ft_print_digits(char *str, int from, int k, int n)
{
	int		i;

	if (k == 0)
	{
		return ;
	}
	i = from;
	while (i < 11 - k)
	{
		str[n - k] = i + '0';
		if (k == 1)
		{
			ft_putstr(str, n);
			if (str[0] != 10 - n + '0')
			{
				ft_putchar(',');
				ft_putchar(' ');
			}
		}
		else
		{
			ft_print_digits(str, i + 1, k - 1, n);
		}
		i = i + 1;
	}
}

void	ft_putstr(char *str, int size)
{
	int		i;

	i = 0;
	while (i < size)
	{
		ft_putchar(str[i]);
		i = i + 1;
	}
}
