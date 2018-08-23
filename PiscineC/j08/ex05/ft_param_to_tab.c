/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_param_to_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhervieu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/14 09:28:48 by jhervieu          #+#    #+#             */
/*   Updated: 2018/08/14 22:30:00 by jhervieu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_stock_par.h"

struct s_stock_par	*ft_param_to_tab(int ac, char **av)
{
	t_stock_par		*tab;
	int				i;

	tab = (t_stock_par*)malloc(sizeof(*tab) * (ac + 1));
	tab[ac].str = NULL;
	i = 0;
	while (i < ac)
	{
		tab[i].str = av[i];
		tab[i].size_param = ft_strlen(av[i]);
		tab[i].copy = ft_strdup(av[i]);
		tab[i].tab = ft_split_whitespaces(av[i]);
		i = i + 1;
	}
	return (tab);
}

int					ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		i = i + 1;
	}
	return (i);
}

char				*ft_strdup(char *src)
{
	char	*dst;
	int		n;
	int		i;

	n = 0;
	while (src[n] != '\0')
	{
		n = n + 1;
	}
	dst = (char*)malloc(sizeof(*src) * n);
	i = 0;
	while (i <= n)
	{
		dst[i] = src[i];
		i = i + 1;
	}
	return (dst);
}
