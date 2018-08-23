/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   read_all_lines.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhervieu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/20 14:55:53 by jhervieu          #+#    #+#             */
/*   Updated: 2018/08/22 17:10:58 by jhervieu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/bsq.h"

int		ft_read_line(int fd, int i, t_metadata *m_map)
{
	char	buf[m_map->n_col];
	char	c;
	int		j;

	j = 0;
	m_map->grid[i] = (char*)malloc(sizeof(char) * m_map->n_col);
	if (read(fd, buf, m_map->n_col) != m_map->n_col)
		return (0);
	read(fd, &c, 1);
	if (c != '\n')
		return (0);
	while (j < m_map->n_col)
	{
		if (ft_is_auth(m_map, buf[j]) == 0)
			return (0);
		m_map->grid[i][j] = buf[j];
		j++;
	}
	return (1);
}

int		ft_build_grid(int fd, t_metadata *m_map, char *f_line)
{
	int		i;
	char	c;
	int		res;

	m_map->grid = (char**)malloc(sizeof(char*) * (m_map->n_line));
	if (!m_map->grid)
		return (0);
	m_map->grid[0] = f_line;
	i = 1;
	while (i < m_map->n_line)
	{
		res = ft_read_line(fd, i, m_map);
		if (res == 0)
			return (0);
		i = i + 1;
	}
	if (read(fd, &c, 1) > 0)
		return (0);
	return (res);
}
