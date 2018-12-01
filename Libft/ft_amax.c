/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_amax.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhervieu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/12 20:40:47 by jhervieu          #+#    #+#             */
/*   Updated: 2018/11/12 20:41:30 by jhervieu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_amax(const int *array, size_t size)
{
	int		max;
	size_t	i;

	if (size == 0)
	{
		return (0);
	}
	max = array[0];
	i = 0;
	while (i < size)
	{
		if (array[i] > max)
		{
			max = array[i];
		}
		i = i + 1;
	}
	return (max);
}
