/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_eight_queens_puzzle.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhervieu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/06 17:30:00 by jhervieu          #+#    #+#             */
/*   Updated: 2018/08/06 23:50:43 by jhervieu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_place_queen(int grid[][8], int col, int *count);
int		ft_queen_allowed(int grid[][8], int row, int col);
void	ft_print_grid(int grid[][8]);

int		ft_eight_queens_puzzle(void)
{
	int		grid[8][8];
	int		count;
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
	count = 0;
	ft_place_queen(grid, 0, &count);
	return (count);
}

void	ft_place_queen(int grid[][8], int col, int *count)
{
	int row;

	row = 0;
	while (row < 8)
	{
		if (ft_queen_allowed(grid, row, col))
		{
			if (col < 7)
			{
				grid[row][col] = 1;
				ft_place_queen(grid, col + 1, count);
				grid[row][col] = 0;
			}
			else
			{
				*count = *count + 1;
			}
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
