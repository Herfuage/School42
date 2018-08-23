/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sastantua.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhervieu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/04 13:54:16 by jhervieu          #+#    #+#             */
/*   Updated: 2018/08/04 23:27:27 by jhervieu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);
void	ft_floor(int floor, int nb_car);
void	ft_line(int nb_spaces, int nb_stars);
void	ft_base(int size, int nb_cars);
void	ft_door_line(int nb_spaces, int nb_stars, int d, int handle);

void	sastantua(int size)
{
	int nb_car;
	int floor;

	if (size < 1)
		return ;
	nb_car = size * (size + 9) - 1;
	nb_car = nb_car + ((size - 1) / 2) * ((size - 1) / 2 - 1);
	nb_car = nb_car + ((size - 2) / 2) * (size / 2) - 1;
	floor = 0;
	while (floor < size - 1)
	{
		ft_floor(floor, nb_car);
		floor++;
	}
	ft_base(size, nb_car);
}

void	ft_floor(int floor, int nb_car)
{
	int line;
	int nb_stars;
	int nb_spaces;

	nb_stars = floor * (floor + 9) + 1;
	nb_stars = nb_stars + (floor / 2) * (floor / 2 - 1);
	nb_stars = nb_stars + ((floor - 1) / 2) * ((floor + 1) / 2);
	nb_spaces = (nb_car - nb_stars - 2) / 2;
	line = 0;
	while (line < floor + 3)
	{
		ft_line(nb_spaces - line, nb_stars + 2 * line);
		line = line + 1;
	}
}

void	ft_line(int nb_spaces, int nb_stars)
{
	int i;

	i = 0;
	while (i < nb_spaces)
	{
		ft_putchar(' ');
		i = i + 1;
	}
	ft_putchar('/');
	i = 0;
	while (i < nb_stars)
	{
		ft_putchar('*');
		i = i + 1;
	}
	ft_putchar('\\');
	ft_putchar('\n');
}

void	ft_base(int size, int nb_car)
{
	int line;
	int nb_stars;
	int nb_spaces;
	int d_size;

	nb_stars = size * (size + 7) - 7;
	nb_stars = nb_stars + ((size - 1) / 2) * ((size - 1) / 2 - 1);
	nb_stars = nb_stars + ((size - 2) / 2) * (size / 2);
	nb_spaces = (nb_car - nb_stars - 2) / 2;
	d_size = ((size - 1) / 2) * 2 + 1;
	line = 0;
	while (line < size + 2)
	{
		if (line < size + 2 - d_size)
			ft_line(nb_spaces - line, nb_stars + 2 * line);
		else
		{
			if (line == size + 2 - d_size + d_size / 2 && size > 4)
				ft_door_line(nb_spaces - line, nb_stars + 2 * line, d_size, 1);
			else
				ft_door_line(nb_spaces - line, nb_stars + 2 * line, d_size, 0);
		}
		line = line + 1;
	}
}

void	ft_door_line(int nb_spaces, int nb_stars, int d, int handle)
{
	int i;

	i = 0;
	while (i < nb_spaces)
	{
		ft_putchar(' ');
		i = i + 1;
	}
	ft_putchar('/');
	i = 0;
	while (i < nb_stars)
	{
		if (i < (nb_stars - d) / 2 || i >= (nb_stars - d) / 2 + d)
			ft_putchar('*');
		else
		{
			if (handle == 1 && i == (nb_stars - d) / 2 + d - 2)
				ft_putchar('$');
			else
				ft_putchar('|');
		}
		i = i + 1;
	}
	ft_putchar('\\');
	ft_putchar('\n');
}
