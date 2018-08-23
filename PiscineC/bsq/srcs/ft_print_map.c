/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_map.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhervieu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/21 00:57:19 by jhervieu          #+#    #+#             */
/*   Updated: 2018/08/22 16:43:05 by jhervieu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/bsq.h"

void	ft_print_map(t_metadata *m_map)
{
	int i;

	i = 0;
	while (i < m_map->n_line)
	{
		write(1, m_map->grid[i], m_map->n_col);
		write(1, "\n", 1);
		i = i + 1;
	}
}
