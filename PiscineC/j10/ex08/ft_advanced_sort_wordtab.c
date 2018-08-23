/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_advanced_sort_wordtab.c                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhervieu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/14 22:12:50 by jhervieu          #+#    #+#             */
/*   Updated: 2018/08/16 18:20:44 by jhervieu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_advanced_sort_wordtab(char **tab, int (*cmp)(char *, char *))
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
			if ((*cmp)(tab[min], tab[j]) > 0)
				min = j;
			j = j + 1;
		}
		temp = tab[i];
		tab[i] = tab[min];
		tab[min] = temp;
		i = i + 1;
	}
}
