/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split_whitespaces.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhervieu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/13 13:57:22 by jhervieu          #+#    #+#             */
/*   Updated: 2018/08/13 17:38:14 by jhervieu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_words(char *str);
int		len(int i, char *str);
int		ft_copy(int i, char *str, char *dst, int words);

char	**ft_split_whitespaces(char *str)
{
	int		i;
	int		w;
	int		space;
	char	**split;

	split = (char**)malloc(sizeof(*split) * (ft_words(str) + 1));
	split[ft_words(str)] = NULL;
	space = 1;
	w = 0;
	i = -1;
	while (str[++i] != '\0')
	{
		if (str[i] == ' ' || str[i] == '\n' || str[i] == '\t')
			space = 1;
		else
		{
			if (space == 1)
			{
				split[w] = (char*)malloc(sizeof(*split[w]) * (len(i, str) + 1));
				w = ft_copy(i, str, split[w], w);
			}
			space = 0;
		}
	}
	return (split);
}

int		len(int i, char *str)
{
	int n;

	n = i;
	while (str[n] != ' ' && str[n] != '\n' && str[n] != '\t' && str[n] != '\0')
	{
		n = n + 1;
	}
	return (n);
}

int		ft_copy(int i, char *str, char *dst, int words)
{
	int n;

	n = i;
	while (str[n] != ' ' && str[n] != '\n' && str[n] != '\t' && str[n] != '\0')
	{
		dst[n - i] = str[n];
		n = n + 1;
	}
	dst[n - i] = '\0';
	return (words + 1);
}

int		ft_words(char *str)
{
	int space;
	int words;
	int i;

	space = 1;
	words = 0;
	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] == ' ' || str[i] == '\n' || str[i] == '\t')
		{
			space = 1;
		}
		else
		{
			if (space == 1)
			{
				words = words + 1;
			}
			space = 0;
		}
		i = i + 1;
	}
	return (words);
}
