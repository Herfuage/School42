/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhervieu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/11 18:53:49 by jhervieu          #+#    #+#             */
/*   Updated: 2018/11/19 17:01:04 by jhervieu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t	i;
	int		diff;

	if (n != 0)
	{
		i = 0;
		while (i < n)
		{
			diff = ((unsigned char*)s1)[i] - ((unsigned char*)s2)[i];
			if (diff != 0)
			{
				return (diff);
			}
			i = i + 1;
		}
	}
	return (0);
}
