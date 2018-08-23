/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhervieu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/12 15:31:45 by jhervieu          #+#    #+#             */
/*   Updated: 2018/08/12 16:12:07 by jhervieu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		sudoku(char grid[][9], char solution[][9]);
int		set_grid(char grid[][9], char **argv);
int		is_line_valid(char *line);
int		is_grid_valid(char grid[][9]);
void	print_grid(char grid[][9]);
int		is_valid(char grid[][9], char n, int x_n, int y_n);

int		main(int argc, char **argv)
{
	char grid[9][9];
	char solution[9][9];

	if (argc != 10)
	{
		write(1, "Error\n", 6);
		return (0);
	}
	if (set_grid(grid, argv) == 0)
	{
		write(1, "Error\n", 6);
		return (0);
	}
	solution[0][0] = '.';
	if (sudoku(grid, solution) == 0)
	{
		write(1, "Error\n", 6);
		return (0);
	}
	print_grid(solution);
	return (0);
}

int		set_grid(char grid[][9], char **argv)
{
	int x;
	int y;

	x = 0;
	while (x < 9)
	{
		if (is_line_valid(argv[x + 1]) == 0)
		{
			return (0);
		}
		y = 0;
		while (y < 9)
		{
			grid[x][y] = argv[x + 1][y];
			y = y + 1;
		}
		x = x + 1;
	}
	if (is_grid_valid(grid) == 0)
	{
		return (0);
	}
	return (1);
}

int		is_line_valid(char *line)
{
	int		i;

	i = 0;
	while (line[i])
	{
		if (('1' <= line[i] && line[i] <= '9') || line[i] == '.')
			i++;
		else
			return (0);
	}
	if (i == 9)
		return (1);
	return (0);
}

int		is_grid_valid(char grid[][9])
{
	int		x;
	int		y;
	char	n;

	y = 0;
	while (y < 9)
	{
		x = 0;
		while (x < 9)
		{
			if (grid[x][y] != '.')
			{
				n = grid[x][y];
				grid[x][y] = '.';
				if (is_valid(grid, n, x, y) == 0)
					return (0);
				grid[x][y] = n;
			}
			x = x + 1;
		}
		y = y + 1;
	}
	return (1);
}

void	print_grid(char grid[][9])
{
	int x;
	int y;

	x = 0;
	while (x < 9)
	{
		y = 0;
		while (y < 9)
		{
			write(1, &grid[x][y], 1);
			if (y < 8)
			{
				write(1, " ", 1);
			}
			y = y + 1;
		}
		write(1, "\n", 1);
		x = x + 1;
	}
}
