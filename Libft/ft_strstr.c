/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhervieu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/19 16:56:44 by jhervieu          #+#    #+#             */
/*   Updated: 2018/11/19 19:24:03 by jhervieu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strstr(const char *str, const char *sub)
{
	size_t	i;
	size_t	j;

	if (sub[0] == '\0')
	{
		return ((char*)str);
	}
	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] == sub[0])
		{
			j = 0;
			while (str[i + j] == sub[j] && sub[j] != '\0')
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
