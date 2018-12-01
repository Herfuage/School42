/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhervieu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/19 16:55:12 by jhervieu          #+#    #+#             */
/*   Updated: 2018/11/21 17:25:33 by jhervieu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *str, const char *sub, size_t len)
{
	size_t	i;
	size_t	j;

	if (sub[0] == '\0')
	{
		return ((char*)str);
	}
	i = 0;
	while (str[i] != '\0' && i < len)
	{
		if (str[i] == sub[0])
		{
			j = 0;
			while (str[i + j] == sub[j] && sub[j] != '\0' && i + j < len)
			{
				j = j + 1;
			}
			if (sub[j] == '\0')
			{
				return ((char*)(str + i));
			}
		}
		i = i + 1;
	}
	return (NULL);
}
