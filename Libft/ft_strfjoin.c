/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strfjoin.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhervieu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/24 17:56:45 by jhervieu          #+#    #+#             */
/*   Updated: 2018/11/24 17:56:53 by jhervieu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strfjoin(char **s1, char const *s2)
{
	char	*dst;
	size_t	i;
	size_t	j;

	if (s1 == NULL || *s1 == NULL || s2 == NULL)
		return (NULL);
	dst = (char*)malloc(sizeof(*dst) * (ft_strlen(*s1) + ft_strlen(s2) + 1));
	if (dst != NULL)
	{
		i = 0;
		while ((*s1)[i] != '\0')
		{
			dst[i] = (*s1)[i];
			i = i + 1;
		}
		j = 0;
		while (s2[j] != '\0')
		{
			dst[i + j] = s2[j];
			j = j + 1;
		}
		dst[i + j] = '\0';
	}
	ft_strdel(s1);
	return (dst);
}
