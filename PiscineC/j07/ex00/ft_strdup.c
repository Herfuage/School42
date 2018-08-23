/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhervieu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/12 17:39:07 by jhervieu          #+#    #+#             */
/*   Updated: 2018/08/13 02:20:33 by jhervieu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strdup(char *src)
{
	char	*dst;
	int		n;
	int		i;

	n = 0;
	while (src[n] != '\0')
	{
		n = n + 1;
	}
	dst = (char*)malloc(sizeof(*src) * n);
	i = 0;
	while (i <= n)
	{
		dst[i] = src[i];
		i = i + 1;
	}
	return (dst);
}
