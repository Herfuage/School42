/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sudoku.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhervieu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/12 14:16:15 by jhervieu          #+#    #+#             */
/*   Updated: 2018/08/12 16:13:20 by jhervieu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		test_numbers(char grid[][9], char solution[][9], int x, int y);
int		copy_grid(char target[][9], char source[][9]);
int		is_valid(char grid[][9], char n, int x_n, int y_n);

int		sudoku(char grid[][9], char solution[][9])
{
	int x;
	int y;

	y = 0;
	while (y < 9)
	{
		x = 0;
		while (x < 9)
		{
			if (grid[x][y] == '.')
			{
				return (test_numbers(grid, solution, x, y));
			}
			x = x + 1;
		}
		y = y + 1;
	}
	if (copy_grid(solution, grid) == 0)
		return (0);
	return (1);
}

int		test_numbers(char grid[][9], char solution[][9], int x, int y)
{
	char n;

	n = '1';
	while (n <= '9')
	{
		if (is_valid(grid, n, x, y))
		{
			grid[x][y] = n;
			if (sudoku(grid, solution) == 0)
			{
				return (0);
			}
			else
			{
				grid[x][y] = '.';
			}
		}
		n = n + 1;
	}
	return (1);
}

int		copy_grid(char target[][9], char source[][9])
{
	int x;
	int y;

	if (target[0][0] != '.')
	{
		return (0);
	}
	x = 0;
	while (x < 9)
	{
		y = 0;
		while (y < 9)
		{
			target[x][y] = source[x][y];
			y = y + 1;
		}
		x = x + 1;
	}
	return (1);
}
