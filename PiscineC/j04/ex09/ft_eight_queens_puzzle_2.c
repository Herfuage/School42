/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_eight_queens_puzzle_2.c                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhervieu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/06 22:21:17 by jhervieu          #+#    #+#             */
/*   Updated: 2018/08/06 23:51:47 by jhervieu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_putchar(char c);
void	ft_place_queen(int grid[][8], int col);
int		ft_queen_allowed(int grid[][8], int row, int col);
void	ft_print_grid(int grid[][8]);

void	ft_eight_queens_puzzle_2(void)
{
	int		grid[8][8];
	int		row;
	int		col;

	row = 0;
	while (row < 8)
	{
		col = 0;
		while (col < 8)
		{
			grid[row][col] = 0;
			col = col + 1;
		}
		row = row + 1;
	}
	ft_place_queen(grid, 0);
}

void	ft_place_queen(int grid[][8], int col)
{
	int row;

	row = 0;
	while (row < 8)
	{
		if (ft_queen_allowed(grid, row, col))
		{
			grid[row][col] = 1;
			if (col < 7)
			{
				ft_place_queen(grid, col + 1);
			}
			else
			{
				ft_print_grid(grid);
			}
			grid[row][col] = 0;
		}
		row = row + 1;
	}
}

int		ft_queen_allowed(int grid[][8], int row, int col)
{
	int i;

	i = 0;
	while (i < 8)
	{
		if (i != col && grid[row][i] == 1)
			return (0);
		if (row - i >= 0 && col - i >= 0 && grid[row - i][col - i] == 1)
			return (0);
		if (row + i < 8 && col + i < 8 && grid[row + i][col + i] == 1)
			return (0);
		if (row + i < 8 && col - i >= 0 && grid[row + i][col - i] == 1)
			return (0);
		if (row - i >= 0 && col + i < 8 && grid[row - i][col + i] == 1)
			return (0);
		i = i + 1;
	}
	return (1);
}

void	ft_print_grid(int grid[][8])
{
	int		row;
	int		col;

	col = 0;
	while (col < 8)
	{
		row = 0;
		while (grid[row][col] != 1)
		{
			row = row + 1;
		}
		ft_putchar(row + 1 + '0');
		col = col + 1;
	}
	ft_putchar('\n');
}
