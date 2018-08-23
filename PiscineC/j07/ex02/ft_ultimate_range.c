/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhervieu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/12 22:15:35 by jhervieu          #+#    #+#             */
/*   Updated: 2018/08/14 01:24:22 by jhervieu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_ultimate_range(int **range, int min, int max)
{
	int i;

	if (min >= max)
	{
		*range = NULL;
		return (0);
	}
	*range = (int *)malloc((sizeof(**range)) * (max - min));
	i = 0;
	while (i < max - min)
	{
		(*range)[i] = min + i;
		i = i + 1;
	}
	return (max - min);
}
