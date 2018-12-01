/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhervieu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/19 16:56:18 by jhervieu          #+#    #+#             */
/*   Updated: 2018/11/21 15:54:01 by jhervieu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	count(const char *s, char c)
{
	size_t	n;
	size_t	i;

	n = 0;
	i = 0;
	while (s[i] != '\0')
	{
		while (s[i] == c)
			i = i + 1;
		if (s[i] != '\0')
			n = n + 1;
		while (s[i] != c && s[i] != '\0')
			i = i + 1;
	}
	return (n);
}

static char		*copy(const char *s, char c, size_t *i)
{
	char	*word;
	size_t	n;
	size_t	j;

	while (s[*i] == c)
		*i = *i + 1;
	n = 0;
	while (s[*i + n] != c && s[*i + n] != '\0')
		n = n + 1;
	if ((word = (char*)malloc(sizeof(*word) * (n + 1))) == NULL)
		return (NULL);
	j = 0;
	while (j < n)
	{
		word[j] = s[*i];
		*i = *i + 1;
		j = j + 1;
	}
	word[j] = '\0';
	return (word);
}

char			**ft_strsplit(const char *s, char c)
{
	char	**t;
	size_t	n_max;
	size_t	n;
	size_t	i;

	if (s == NULL)
		return (NULL);
	n_max = count(s, c);
	if ((t = (char**)malloc(sizeof(*t) * (n_max + 1))) == NULL)
		return (NULL);
	n = 0;
	i = 0;
	while (n < n_max)
	{
		if ((t[n] = copy(s, c, &i)) == NULL)
			return (NULL);
		n = n + 1;
	}
	t[n_max] = 0;
	return (t);
}
