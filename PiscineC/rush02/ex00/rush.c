/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhervieu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/19 17:53:17 by jhervieu          #+#    #+#             */
/*   Updated: 2018/08/19 17:55:18 by jhervieu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush.h"

void	ft_check_rush(int x, int y, char *str, char *rush)
{
	int		match;
	int		count;

	match = 0;
	count = 0;
	ft_rush(x, y, "o-o| |o-o", rush);
	if (ft_strcmp(str, rush) == 1)
		count = count + ft_display(0, x, y, &match);
	ft_rush(x, y, "/*\\* *\\*/", rush);
	if (ft_strcmp(str, rush) == 1)
		count = count + ft_display(1, x, y, &match);
	ft_rush(x, y, "ABAB BCBC", rush);
	if (ft_strcmp(str, rush) == 1)
		count = count + ft_display(2, x, y, &match);
	ft_rush(x, y, "ABCB BABC", rush);
	if (ft_strcmp(str, rush) == 1)
		count = count + ft_display(3, x, y, &match);
	ft_rush(x, y, "ABCB BCBA", rush);
	if (ft_strcmp(str, rush) == 1)
		count = count + ft_display(4, x, y, &match);
	if (count == 0)
		write(1, "aucune", 6);
	write(1, "\n", 1);
}

void	ft_rush(int x, int y, char *pattern, char *rush)
{
	int n;

	n = 0;
	if (y > 1)
	{
		ft_print_line(x, 0, pattern, rush + n * (x + 1));
		n = n + 1;
	}
	while (n < y - 1)
	{
		ft_print_line(x, 3, pattern, rush + n * (x + 1));
		n = n + 1;
	}
	if (y > 0)
	{
		ft_print_line(x, 6, pattern, rush + n * (x + 1));
	}
}

void	ft_print_line(int x, int start, char *pattern, char *rush)
{
	int n;

	n = 0;
	if (x > 1)
	{
		rush[n] = pattern[start];
		n = n + 1;
	}
	while (n < x - 1)
	{
		rush[n] = pattern[start + 1];
		n = n + 1;
	}
	if (x > 0)
	{
		rush[n] = pattern[start + 2];
		rush[n + 1] = '\n';
	}
}

int		ft_strcmp(char *s1, char *s2)
{
	int i;

	i = 0;
	while (s1[i] == s2[i] && s1[i] != '\0' && s2[i] != '\0')
	{
		i = i + 1;
	}
	if (s1[i] == s2[i])
	{
		return (1);
	}
	return (0);
}
