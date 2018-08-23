/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_read_map.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: grgauthi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/20 15:19:47 by grgauthi          #+#    #+#             */
/*   Updated: 2018/08/22 19:52:30 by grgauthi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/bsq.h"

int		ft_read_map(int fd)
{
	char		*f_line;
	t_metadata	*m_map;

	m_map = (t_metadata*)malloc(sizeof(*m_map));
	if (m_map == NULL)
		return (0);
	if (ft_set_metadata(fd, m_map) == 0)
		return (0);
	f_line = ft_read_first_line(fd, m_map);
	if (!f_line)
		return (0);
	if (!ft_build_grid(fd, m_map, f_line))
		return (0);
	ft_solve_map(m_map);
	free(m_map);
	return (1);
}

void	ft_read_map_file(char *file)
{
	int			fd;

	fd = open(file, O_RDONLY);
	if (fd < 0)
	{
		ERR_MESS;
		return ;
	}
	if (ft_read_map(fd) == 0)
	{
		ERR_MESS;
		return ;
	}
	if (close(fd) < 0)
	{
		ERR_MESS;
		return ;
	}
}
