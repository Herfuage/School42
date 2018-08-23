/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhervieu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/06 17:00:18 by jhervieu          #+#    #+#             */
/*   Updated: 2018/08/06 23:44:47 by jhervieu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_is_prime(int nb);

int		ft_find_next_prime(int nb)
{
	while (ft_is_prime(nb) == 0)
	{
		nb = nb + 1;
	}
	return (nb);
}

int		ft_is_prime(int nb)
{
	int div;
	int is_prime;

	if ((nb % 2 == 0 && nb != 2) || nb < 2)
	{
		return (0);
	}
	div = 3;
	is_prime = 1;
	while (div <= nb / div && is_prime == 1)
	{
		if (nb % div == 0)
		{
			is_prime = 0;
		}
		div = div + 2;
	}
	return (is_prime);
}
