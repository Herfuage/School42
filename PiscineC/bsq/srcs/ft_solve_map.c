/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_solve_map.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhervieu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/21 01:02:17 by jhervieu          #+#    #+#             */
/*   Updated: 2018/08/22 17:12:11 by jhervieu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/bsq.h"

int		ft_grid_init(int **grid, int n_line, int n_col)
{
	int i;
	int j;

	i = 0;
	while (i < n_line)
	{
		grid[i] = (int*)malloc(sizeof(int) * n_col);
		if (grid[i] == NULL)
		{
			return (0);
		}
		j = 0;
		while (j < n_col)
		{
			grid[i][j] = 1;
			j = j + 1;
		}
		i = i + 1;
	}
	return (1);
}

int		ft_solve_map(t_metadata *m_map)
{
	t_square	square;
	int			**grid;

	square.i = 0;
	square.j = 0;
	square.size = 0;
	grid = (int**)malloc(sizeof(*grid) * m_map->n_line);
	if (grid == NULL)
	{
		return (0);
	}
	if (ft_grid_init(grid, m_map->n_line, m_map->n_col) == 0)
	{
		return (0);
	}
	ft_max_square(m_map, &square, grid);
	free(grid);
	ft_merge_square(m_map, &square);
	ft_print_map(m_map);
	return (1);
}
