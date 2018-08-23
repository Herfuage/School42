/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operator.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhervieu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/14 16:50:06 by jhervieu          #+#    #+#             */
/*   Updated: 2018/08/14 21:18:43 by jhervieu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_doop.h"

int		ft_add(int a, int b)
{
	return (a + b);
}

int		ft_diff(int a, int b)
{
	return (a - b);
}

int		ft_times(int a, int b)
{
	return (a * b);
}

int		ft_div(int a, int b)
{
	if (b == 0)
	{
		return (0);
	}
	return (a / b);
}

int		ft_modulo(int a, int b)
{
	if (b == 0)
	{
		return (0);
	}
	return (a % b);
}
