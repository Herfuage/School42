/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhervieu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/12 18:37:41 by jhervieu          #+#    #+#             */
/*   Updated: 2018/11/17 21:45:31 by jhervieu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char			*dst;
	unsigned int	i;

	dst = NULL;
	if (s != NULL && f != NULL)
	{
		dst = (char*)malloc(sizeof(*dst) * (ft_strlen(s) + 1));
		if (dst != NULL)
		{
			i = 0;
			while (s[i] != '\0')
			{
				dst[i] = (*f)(i, s[i]);
				i = i + 1;
			}
			dst[i] = '\0';
		}
	}
	return (dst);
}
