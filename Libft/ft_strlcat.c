/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhervieu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/19 16:53:59 by jhervieu          #+#    #+#             */
/*   Updated: 2018/11/19 18:50:53 by jhervieu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	n;

	n = ft_strlen(dst);
	if (n < size)
	{
		ft_strncat(dst, src, size - n - 1);
	}
	return (ft_min(n, size) + ft_strlen(src));
}
