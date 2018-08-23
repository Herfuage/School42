/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_read_first_line.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: grgauthi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/20 14:54:05 by grgauthi          #+#    #+#             */
/*   Updated: 2018/08/22 19:49:42 by grgauthi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/bsq.h"

char	*ft_read_first_line(int fd, t_metadata *m_map)
{
	char	c;
	int		i;
	char	*tmp;
	char	*str;

	c = '\0';
	i = 1;
	while (read(fd, &c, 1) && ft_is_auth(m_map, c) == 1 && c != '\n')
	{
		tmp = str;
		str = ft_strcpy(malloc(sizeof(*str) * i + 1), str);
		if (!str)
			return (0);
		str[i - 1] = c;
		str[i] = '\0';
		free(tmp);
		i++;
	}
	if (c == '\n')
	{
		m_map->n_col = i - 1;
	}
	else
		return (NULL);
	return (str);
}
