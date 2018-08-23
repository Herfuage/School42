/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_map.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhervieu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/14 15:30:31 by jhervieu          #+#    #+#             */
/*   Updated: 2018/08/16 18:17:40 by jhervieu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		*ft_map(int *tab, int length, int (*f)(int))
{
	int		i;
	int		*dest;

	dest = (int*)malloc(sizeof(*dest) * length);
	i = 0;
	while (i < length)
	{
		dest[i] = (*f)(tab[i]);
		i = i + 1;
	}
	return (dest);
}
