/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_memory.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhervieu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/08 14:22:05 by jhervieu          #+#    #+#             */
/*   Updated: 2018/08/08 18:41:43 by jhervieu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);
void	ft_print_count(int n);
void	ft_print_hexa(char *line, int size);
void	ft_print_line(char *line, int size);

void	ft_print_memory(void *addr, unsigned int size)
{
	unsigned int	i;
	unsigned int	j;

	i = 0;
	j = 0;
	while (i < size)
	{
		if (j == 15 || i == size - 1)
		{
			ft_print_count(i - j);
			ft_print_hexa(addr + i - j, j);
			ft_print_line(addr + i - j, j);
			j = -1;
		}
		i = i + 1;
		j = j + 1;
	}
}

void	ft_print_count(int n)
{
	int pow;

	pow = 268435456;
	while (pow > 0)
	{
		if (n / pow < 10)
			ft_putchar(n / pow + '0');
		else
			ft_putchar(n / pow + 'a');
		n = n % pow;
		pow = pow / 16;
	}
	ft_putchar(':');
}

void	ft_print_hexa(char *line, int size)
{
	int i;

	i = 0;
	while (i < 16)
	{
		if (i % 2 == 0)
			ft_putchar(' ');
		if (i > size)
		{
			ft_putchar(' ');
			ft_putchar(' ');
		}
		else
		{
			if (line[i] / 16 < 10)
				ft_putchar(line[i] / 16 + '0');
			else
				ft_putchar(line[i] / 16 - 10 + 'a');
			if (line[i] % 16 < 10)
				ft_putchar(line[i] % 16 + '0');
			else
				ft_putchar(line[i] % 16 - 10 + 'a');
		}
		i = i + 1;
	}
}

void	ft_print_line(char *line, int size)
{
	int i;

	ft_putchar(' ');
	i = 0;
	while (i <= size)
	{
		if (line[i] > 31)
		{
			ft_putchar(line[i]);
		}
		else
		{
			ft_putchar('.');
		}
		i = i + 1;
	}
	ft_putchar('\n');
}
