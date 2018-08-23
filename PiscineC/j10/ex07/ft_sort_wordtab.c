/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_wordtab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhervieu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/14 21:24:35 by jhervieu          #+#    #+#             */
/*   Updated: 2018/08/16 18:20:16 by jhervieu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_strcmp(char *s1, char *s2)
{
	int i;

	i = 0;
	while (s1[i] != '\0' && s2[i] != '\0')
	{
		if (s1[i] != s2[i])
		{
			return (s1[i] - s2[i]);
		}
		i = i + 1;
	}
	return (s1[i] - s2[i]);
}

void	ft_sort_wordtab(char **tab)
{
	int		i;
	int		j;
	int		n;
	int		min;
	char	*temp;

	n = 0;
	while (tab[n] != 0)
		n = n + 1;
	i = 0;
	while (i < n)
	{
		min = i;
		j = i;
		while (j < n)
		{
			if (ft_strcmp(tab[min], tab[j]) > 0)
				min = j;
			j = j + 1;
		}
		temp = tab[i];
		tab[i] = tab[min];
		tab[min] = temp;
		i = i + 1;
	}
}
