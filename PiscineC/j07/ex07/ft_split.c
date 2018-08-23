/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhervieu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/14 00:43:25 by jhervieu          #+#    #+#             */
/*   Updated: 2018/08/14 01:16:26 by jhervieu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		words(char *str, char *charset);
int		f(int i, char *str, char *charset);
void	copy(int i, char *str, char *dst, char *charset);
int		is_sep(char c, char *charset);

char	**ft_split(char *str, char *charset)
{
	int		i;
	int		w;
	int		space;
	char	**s;

	s = (char**)malloc(sizeof(*s) * (words(str, charset) + 1));
	s[words(str, charset)] = NULL;
	space = 1;
	w = 0;
	i = -1;
	while (str[++i] != '\0')
	{
		if (is_sep(str[i], charset) == 1)
			space = 1;
		else
		{
			if (space == 1)
			{
				s[w] = (char*)malloc(sizeof(*s[w]) * (f(i, str, charset) + 1));
				copy(i, str, s[w++], charset);
			}
			space = 0;
		}
	}
	return (s);
}

int		f(int i, char *str, char *charset)
{
	int n;

	n = i;
	while (is_sep(str[n], charset) == 0 && str[n] != '\0')
	{
		n = n + 1;
	}
	return (n);
}

void	copy(int i, char *str, char *dst, char *charset)
{
	int n;

	n = i;
	while (is_sep(str[n], charset) == 0 && str[n] != '\0')
	{
		dst[n - i] = str[n];
		n = n + 1;
	}
	dst[n - i] = '\0';
}

int		words(char *str, char *charset)
{
	int space;
	int w;
	int i;

	space = 1;
	w = 0;
	i = 0;
	while (str[i] != '\0')
	{
		if (is_sep(str[i], charset) == 1)
		{
			space = 1;
		}
		else
		{
			if (space == 1)
			{
				w = w + 1;
			}
			space = 0;
		}
		i = i + 1;
	}
	return (w);
}

int		is_sep(char c, char *charset)
{
	int i;

	i = 0;
	while (charset[i] != '\0')
	{
		if (c == charset[i])
		{
			return (1);
		}
		i = i + 1;
	}
	return (0);
}
