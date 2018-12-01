/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhervieu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/12 18:29:20 by jhervieu          #+#    #+#             */
/*   Updated: 2018/11/19 17:02:06 by jhervieu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmap(char const *s, char (*f)(char))
{
	char	*dst;
	int		i;

	dst = NULL;
	if (s != NULL && f != NULL)
	{
		dst = (char*)malloc(sizeof(*dst) * (ft_strlen(s) + 1));
		if (dst != NULL)
		{
			i = 0;
			while (s[i] != '\0')
			{
				dst[i] = (*f)(s[i]);
				i = i + 1;
			}
			dst[i] = '\0';
		}
	}
	return (dst);
}
