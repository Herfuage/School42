/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhervieu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/08 13:21:59 by jhervieu          #+#    #+#             */
/*   Updated: 2018/08/08 18:11:48 by jhervieu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);
void	ft_print_hexa(int n);

void	ft_putstr_non_printable(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] > 0 && str[i] < 32)
		{
			ft_print_hexa(str[i]);
		}
		else
		{
			ft_putchar(str[i]);
		}
		i = i + 1;
	}
}

void	ft_print_hexa(int n)
{
	ft_putchar('\\');
	if (n < 16)
	{
		ft_putchar('0');
	}
	else
	{
		ft_putchar('1');
		n = n - 16;
	}
	if (n < 10)
	{
		ft_putchar(n + '0');
	}
	else
	{
		ft_putchar(n - 10 + 'a');
	}
}
