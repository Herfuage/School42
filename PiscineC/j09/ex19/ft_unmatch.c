/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_unmatch.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhervieu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/10 11:44:47 by jhervieu          #+#    #+#             */
/*   Updated: 2018/08/10 12:06:59 by jhervieu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_unmatch(int *tab, int length)
{
	int i;
	int j;
	int nb_occ;

	i = 0;
	while (i < length)
	{
		j = 0;
		nb_occ = 0;
		while (j < length)
		{
			if (tab[i] == tab[j])
			{
				nb_occ = nb_occ + 1;
			}
			j = j + 1;
		}
		if (nb_occ % 2 == 1)
		{
			return (tab[i]);
		}
		i = i + 1;
	}
	return (0);
}
