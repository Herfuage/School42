/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_merge_square.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhervieu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/20 23:26:59 by jhervieu          #+#    #+#             */
/*   Updated: 2018/08/22 15:08:45 by grgauthi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/bsq.h"

void	ft_merge_square(t_metadata *m_map, t_square *square)
{
	int i;
	int j;

	i = 0;
	while (i < square->size)
	{
		j = 0;
		while (j < square->size)
		{
			m_map->grid[square->i + i][square->j + j] = m_map->full;
			j = j + 1;
		}
		i = i + 1;
	}
}
