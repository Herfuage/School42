/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhervieu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/19 16:57:13 by jhervieu          #+#    #+#             */
/*   Updated: 2018/11/19 19:40:22 by jhervieu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int		space(char c)
{
	if (c == ' ' || c == '\n' || c == '\t')
	{
		return (1);
	}
	return (0);
}

static size_t	length(char const *s)
{
	size_t	n;

	n = 0;
	while (s[n] != '\0')
	{
		n = n + 1;
	}
	while (n > 0 && space(s[n - 1]))
	{
		n = n - 1;
	}
	return (n);
}

char			*ft_strtrim(char const *s)
{
	char	*dst;
	size_t	n;
	size_t	i;
	size_t	j;

	if (s == NULL)
		return (NULL);
	i = 0;
	while (space(s[i]))
	{
		i = i + 1;
	}
	n = length(s + i);
	dst = (char*)malloc(sizeof(*dst) * (n + 1));
	if (dst == NULL)
		return (NULL);
	j = 0;
	while (j < n)
	{
		dst[j] = s[i + j];
		j = j + 1;
	}
	dst[j] = '\0';
	return (dst);
}
