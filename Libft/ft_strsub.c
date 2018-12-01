/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhervieu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/12 18:40:34 by jhervieu          #+#    #+#             */
/*   Updated: 2018/11/17 21:50:07 by jhervieu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strsub(char const *s, unsigned int start, size_t len)
{
	char	*sub;
	size_t	i;

	sub = NULL;
	if (s != NULL)
	{
		sub = (char*)malloc(sizeof(*sub) * (len + 1));
		if (sub != NULL)
		{
			i = 0;
			while (i < len)
			{
				sub[i] = s[start + i];
				i = i + 1;
			}
			sub[i] = '\0';
		}
	}
	return (sub);
}
