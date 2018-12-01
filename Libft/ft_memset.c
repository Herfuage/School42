/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhervieu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/11 16:19:25 by jhervieu          #+#    #+#             */
/*   Updated: 2018/11/17 21:15:06 by jhervieu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	unsigned char	*tmp;
	size_t			i;

	tmp = (unsigned char*)b;
	i = 0;
	while (i < len)
	{
		tmp[i] = (unsigned char)c;
		i = i + 1;
	}
	return (tmp);
}
