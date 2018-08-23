/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   read.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhervieu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/19 18:02:37 by jhervieu          #+#    #+#             */
/*   Updated: 2018/08/19 22:08:52 by jhervieu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush.h"

int		ft_read_str(char **str)
{
	char	*tmp;
	char	buf;
	int		n;

	tmp = NULL;
	n = 0;
	while (read(0, &buf, 1) > 0)
	{
		if (ft_allocate(&tmp, str, n) == 0)
		{
			return (-1);
		}
		(*str)[n] = buf;
		n = n + 1;
	}
	if (ft_allocate(&tmp, str, n) == 0)
	{
		return (-1);
	}
	(*str)[n] = '\0';
	free(tmp);
	return (n);
}

int		ft_allocate(char **tmp, char **str, int n)
{
	free(*tmp);
	*tmp = (char*)malloc(sizeof(**tmp) * (n + 1));
	if (*tmp == NULL)
	{
		return (0);
	}
	ft_strcpy(*tmp, *str, n);
	free(*str);
	*str = (char*)malloc(sizeof(**str) * (n + 1));
	if (*str == NULL)
	{
		return (0);
	}
	ft_strcpy(*str, *tmp, n);
	return (1);
}

void	ft_strcpy(char *dest, char *src, int n)
{
	int i;

	i = 0;
	while (i < n)
	{
		dest[i] = src[i];
		i = i + 1;
	}
}
