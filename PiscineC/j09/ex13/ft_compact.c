/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_compact.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhervieu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/10 09:47:39 by jhervieu          #+#    #+#             */
/*   Updated: 2018/08/10 10:17:10 by jhervieu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_compact(char **tab, int length)
{
	int i;
	int j;

	i = 0;
	while (i < length)
	{
		if (tab[i][0] == '\0')
		{
			j = i;
			while (j < length - 1)
			{
				tab[j] = tab[j + 1];
				j = j + 1;
			}
			length = length - 1;
			i = i - 1;
		}
		i = i + 1;
	}
	return (length);
}
