/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_empty_cell.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhervieu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/21 00:31:22 by jhervieu          #+#    #+#             */
/*   Updated: 2018/08/21 00:31:53 by jhervieu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/bsq.h"

int		ft_is_empty_cell(t_metadata *m_map, int i, int j)
{
	if (i < 0 || i >= m_map->n_line)
	{
		return (0);
	}
	if (j < 0 || j >= m_map->n_col)
	{
		return (0);
	}
	if (m_map->grid[i][j] == m_map->obs)
	{
		return (0);
	}
	return (1);
}
