/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhervieu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/04 01:26:05 by jhervieu          #+#    #+#             */
/*   Updated: 2018/08/04 09:49:52 by jhervieu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_print_line(int x, char c, char r)
{
	int i;

	if (x > 1)
	{
		ft_putchar(c);
	}
	i = 0;
	while (i < x - 2)
	{
		ft_putchar(r);
		i++;
	}
	if (x > 0)
	{
		ft_putchar(c);
		ft_putchar('\n');
	}
}

void	rush(int x, int y)
{
	int i;

	if (y > 1)
	{
		ft_print_line(x, 'o', '-');
	}
	i = 0;
	while (i < y - 2)
	{
		ft_print_line(x, '|', ' ');
		i++;
	}
	if (y > 0)
	{
		ft_print_line(x, 'o', '-');
	}
}
