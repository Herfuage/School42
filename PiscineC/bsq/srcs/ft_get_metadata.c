/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_get_string.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: grgauthi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/20 09:05:53 by grgauthi          #+#    #+#             */
/*   Updated: 2018/08/22 19:19:57 by grgauthi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/bsq.h"

char	*ft_read_metadata(int fd)
{
	char	c;
	char	*str;
	char	*temp;
	int		i;

	str = (char *)malloc(sizeof(char));
	if (str == NULL)
		return (NULL);
	*str = '\0';
	i = 1;
	while (read(fd, &c, 1) > 0 && c != '\n')
	{
		temp = str;
		str = ft_strcpy((char *)malloc((i + 1) * sizeof(char)), str);
		free(temp);
		if (str == NULL)
			return (NULL);
		str[i - 1] = c;
		str[i] = '\0';
		i++;
	}
	return (str);
}

int		ft_check_metadata(char *line)
{
	int		i;

	i = 0;
	while (line[i] && line[i] >= '0' && line[i] <= '9')
		i++;
	if (ft_strlen(line) - i > 3)
		return (0);
	return (i);
}

int		ft_min(int n, int m)
{
	if (n < m)
		return (n);
	else
		return (m);
}

int		ft_set_metadata(int fd, t_metadata *res)
{
	char	*line;

	line = ft_read_metadata(fd);
	if (ft_check_metadata(line) == 0 || ft_strlen(line) < 4)
	{
		return (0);
	}
	else
	{
		res->full = line[ft_strlen(line) - 1];
		res->obs = line[ft_strlen(line) - 2];
		res->empty = line[ft_strlen(line) - 3];
		line[ft_min(ft_check_metadata(line), ft_strlen(line) - 3)] = '\0';
		res->n_line = ft_atoi(line);
		if (res->empty == res->obs || res->empty == res->full ||
				res->obs == res->full || res->n_line == 0)
		{
			return (0);
		}
	}
	return (1);
}
