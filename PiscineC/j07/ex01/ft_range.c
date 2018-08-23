/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhervieu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/12 21:19:26 by jhervieu          #+#    #+#             */
/*   Updated: 2018/08/21 02:24:29 by jhervieu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		*ft_range(int min, int max)
{
	int *tab;
	int i;

	if (min >= max)
	{
		return (NULL);
	}
	tab = (int*)malloc((sizeof(*tab)) * (max - min));
	if (tab == NULL)
		return (NULL);
	i = 0;
	while (i < max - min)
	{
		tab[i] = min + i;
		i = i + 1;
	}
	return (tab);
}

int		main(void)
{
	ft_range(-1, 2147483647);
	return (0);
}
