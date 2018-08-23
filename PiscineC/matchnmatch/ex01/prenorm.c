/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   retry.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhervieu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/11 22:04:55 by jhervieu          #+#    #+#             */
/*   Updated: 2018/08/12 11:38:38 by jhervieu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		ft_match(char *s1, char*s2, int length, int cur1, int cur2);
int		len(char *str);

int		nmatch(char *s1, char *s2)
{
	int count;
	int i;

	i = 0;
	while (s1[i++] != '\0')
	while (s2[i++] != '\0')
	count =	ft_match(s1, s2, i + 1, 0, 0);
	return (count);
}

int		ft_match(char *s1, char*s2, int length, int cur1, int cur2)
{
	char cp1[length + 1];
	char cp2[length + 1];
	int i;
	int j;
	int k;
	int count;

	if (s1[cur1] == '\0' && s2[cur2] == '\0')
	{
		return (1);	
	}
	if (s1[cur1] == s2[cur2])
	{
		return (ft_match(s1, s2, length, cur1 + 1, cur2 + 1));
	}
	if (s2[cur2] != '*')
	{
		return (0);
	}
	
	i = 0;
	count = 0;
	while (i <= len(s1) - cur1)
	{
		j = 0;
		while (s1[cur1 + j] != '\0')
		{
			cp1[j] = s1[cur1 + j];
			j = j + 1;
		}
		cp1[j] = s1[cur1 + j];
		j = 0;
		while (j < i)
		{
			cp2[j] = s1[cur1 + j];
			j = j + 1;
		}
		k = 1;
		while (s2[cur2 + k] != '\0')
		{
			cp2[j - 1 + k] = s2[cur2 + k];
			k = k + 1;
		}
		cp2[j - 1 + k] = s2[cur2 + k];
		count = count + ft_match(cp1, cp2, len(cp1) + len(cp2), 0, 0);
		i =  i + 1;
	}
	return (count);
}

int		len(char *str)
{
	int i = 0;

	i = 0;
	while (str[i] != '\0')
	{
		i = i + 1;
	}
	return (i);
}
