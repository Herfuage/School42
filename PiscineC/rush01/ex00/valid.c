/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   valid.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhervieu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/12 15:27:29 by jhervieu          #+#    #+#             */
/*   Updated: 2018/08/12 16:13:42 by jhervieu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		check_line(char grid[][9], char n, int y_n);
int		check_column(char grid[][9], char n, int x_n);
int		check_box(char grid[][9], char n, int x_n, int y_n);

int		is_valid(char grid[][9], char n, int x_n, int y_n)
{
	if (check_line(grid, n, y_n) == 0)
	{
		return (0);
	}
	if (check_column(grid, n, x_n) == 0)
	{
		return (0);
	}
	if (check_box(grid, n, x_n, y_n) == 0)
	{
		return (0);
	}
	return (1);
}

int		check_line(char grid[][9], char n, int y_n)
{
	int x;

	x = 0;
	while (x < 9)
	{
		if (grid[x][y_n] == n)
			return (0);
		x++;
	}
	return (1);
}

int		check_column(char grid[][9], char n, int x_n)
{
	int y;

	y = 0;
	while (y < 9)
	{
		if (grid[x_n][y] == n)
		{
			return (0);
		}
		y++;
	}
	return (1);
}

int		check_box(char grid[][9], char n, int x_n, int y_n)
{
	int x;
	int y;

	y = 0;
	while (y < 3)
	{
		x = 0;
		while (x < 3)
		{
			if (grid[x_n - x_n % 3 + x][y_n - y_n % 3 + y] == n)
			{
				return (0);
			}
			x = x + 1;
		}
		y = y + 1;
	}
	return (1);
}
