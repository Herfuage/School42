/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_max_square.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhervieu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/22 16:58:25 by jhervieu          #+#    #+#             */
/*   Updated: 2018/08/22 18:58:58 by jhervieu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/bsq.h"

int		ft_expand(t_metadata *m_map, t_square *local, t_square *obs, int size)
{
	int		n;

	n = size;
	while (n >= 0)
	{
		if (ft_is_empty_cell(m_map, local->i + size, local->j + n) == 0)
		{
			obs->i = local->i + size;
			obs->j = local->j + n;
			return (0);
		}
		if (ft_is_empty_cell(m_map, local->i + n, local->j + size) == 0)
		{
			obs->i = local->i + n;
			obs->j = local->j + size;
			return (0);
		}
		n = n - 1;
	}
	return (1);
}

int		ft_local_max_square(t_metadata *m_map, t_square *local, t_square *obs)
{
	int		size;

	size = 0;
	while (1)
	{
		if (ft_is_empty_cell(m_map, local->i + size, local->j + size) == 0)
		{
			obs->i = local->i + size;
			obs->j = local->j + size;
			return (size);
		}
		if (ft_expand(m_map, local, obs, size) == 0)
		{
			return (size);
		}
		size = size + 1;
	}
	return (0);
}

void	ft_forbidden_cells(t_metadata *m_map, int **grid,
							t_square *local, t_square *obs)
{
	int i;
	int j;

	i = 0;
	while (i <= local->size)
	{
		j = 0;
		while (j <= local->size)
		{
			if (local->i + i <= obs->i && local->j + j <= obs->j)
			{
				if (local->i + i < m_map->n_line
					&& local->j + j < m_map->n_col)
				{
					grid[local->i + i][local->j + j] = 0;
				}
			}
			j = j + 1;
		}
		i = i + 1;
	}
}

void	ft_copy_square(t_square *dst, t_square *src)
{
	dst->i = src->i;
	dst->j = src->j;
	dst->size = src->size;
}

void	ft_max_square(t_metadata *m_map, t_square *square, int **grid)
{
	t_square	local;
	t_square	obs;

	local.i = 0;
	while (local.i < m_map->n_line)
	{
		local.j = 0;
		while (local.j < m_map->n_col)
		{
			if (grid[local.i][local.j] == 1
				&& local.i + square->size < m_map->n_line
				&& local.j + square->size < m_map->n_col)
			{
				local.size = ft_local_max_square(m_map, &local, &obs);
				ft_forbidden_cells(m_map, grid, &local, &obs);
				if (local.size > square->size)
				{
					ft_copy_square(square, &local);
				}
			}
			local.j = local.j + 1;
		}
		local.i = local.i + 1;
	}
}
