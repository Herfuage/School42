/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_join.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhervieu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/10 10:48:00 by jhervieu          #+#    #+#             */
/*   Updated: 2018/08/10 11:43:23 by jhervieu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		len(char *str);
void	ft_copy(char *result, char **tab, int nb_str, char *sep);

char	*ft_join(char **tab, char *sep)
{
	int nb_car;
	int nb_str;
	int total_size;
	char *result;
	int i;

	nb_car = sizeof(tab) / sizeof(char);
	nb_str = 0;
	i = 0;
	while(i < nb_car)
	{
		i = i + len(tab[nb_str]);
		nb_str = nb_str + 1;
	}
	total_size = nb_car + (nb_str - 1) * (len(sep) - 1);
	result = (char *)malloc(total_size * sizeof(char));
	ft_copy(result, tab, nb_str, sep);
	return (result);
}

void ft_copy(char *result, char **tab, int nb_str, char *sep)
{
	int i;
	int j;
	int k;

	i = 0;
	k = 0;
	while (i < nb_str)
	{
		j = 0;
		while (tab[i][j] != '\0')
			result[k++] = tab[i][j++];
		j = 0;
		if (i != nb_str - 1)
		{
			while (sep[j] != '\0')
				result[k++] = sep[j++];
		}
		i = i + 1;
	}
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
