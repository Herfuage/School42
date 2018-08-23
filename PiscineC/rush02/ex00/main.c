/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhervieu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/19 00:09:03 by jhervieu          #+#    #+#             */
/*   Updated: 2018/08/19 22:03:49 by jhervieu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush.h"

int		main(void)
{
	char	*str;
	char	*rush;
	int		size;
	int		x;
	int		y;

	str = NULL;
	size = ft_read_str(&str);
	if (size == -1)
		return (ft_no_result(1));
	if (str[0] != '\0' && str[size - 1] != '\n')
		return (ft_no_result(0));
	y = ft_count_rows(str);
	if (ft_count_cols(str, &x) == 0)
		return (ft_no_result(0));
	rush = (char*)malloc(sizeof(*rush) * (size + 1));
	if (rush == NULL)
		return (0);
	rush[size] = '\0';
	ft_check_rush(x, y, str, rush);
	free(str);
	free(rush);
	return (0);
}

int		ft_count_rows(char *str)
{
	int y;
	int i;

	y = 0;
	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] == '\n')
		{
			y = y + 1;
		}
		i = i + 1;
	}
	return (y);
}

int		ft_count_cols(char *str, int *x)
{
	int i;
	int n;

	n = 0;
	while (str[n] != '\n' && str[n] != '\0')
		n = n + 1;
	*x = n;
	if (str[0] == '\0')
		return (1);
	i = n + 1;
	while (str[i] != '\0')
	{
		n = 0;
		while (str[i] != '\n')
		{
			n = n + 1;
			i = i + 1;
		}
		if (n != *x)
			return (0);
		i = i + 1;
	}
	return (1);
}
