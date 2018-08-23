/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhervieu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/06 13:26:40 by jhervieu          #+#    #+#             */
/*   Updated: 2018/08/06 23:41:37 by jhervieu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
