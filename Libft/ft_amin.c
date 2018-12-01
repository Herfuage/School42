/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_amin.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhervieu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/12 20:35:21 by jhervieu          #+#    #+#             */
/*   Updated: 2018/11/12 20:40:19 by jhervieu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_amin(const int *array, size_t size)
{
	int		min;
	size_t	i;

	if (size == 0)
	{
		return (0);
	}
	min = array[0];
	i = 0;
	while (i < size)
	{
		if (array[i] < min)
		{
			min = array[i];
		}
		i = i + 1;
	}
	return (min);
}
