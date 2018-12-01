/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhervieu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/11 19:02:13 by jhervieu          #+#    #+#             */
/*   Updated: 2018/11/24 17:27:32 by jhervieu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnew(size_t size)
{
	char	*s;
	size_t	i;

	s = (char*)malloc(size + 1);
	if (s != NULL)
	{
		i = 0;
		while (i < size + 1)
		{
			s[i] = '\0';
			i = i + 1;
		}
	}
	return (s);
}