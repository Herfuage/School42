/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhervieu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/10 21:18:22 by jhervieu          #+#    #+#             */
/*   Updated: 2018/11/12 16:36:54 by jhervieu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_atoi(const char *str)
{
	int		i;
	int		n;
	int		s;

	i = 0;
	n = 0;
	s = 1;
	while (ft_isspace(str[i]))
	{
		i = i + 1;
	}
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
		{
			s = -1;
		}
		i = i + 1;
	}
	while (ft_isdigit(str[i]))
	{
		n = n * 10 + str[i] - '0';
		i = i + 1;
	}
	return (n * s);
}
