/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhervieu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/05 20:40:04 by jhervieu          #+#    #+#             */
/*   Updated: 2018/08/06 00:33:01 by jhervieu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_iterative_power(int nb, int power)
{
	int i;
	int result;

	if (power < 0)
	{
		return (0);
	}
	if (nb == 1)
	{
		return (1);
	}
	if (nb == -1)
	{
		return (1 - 2 * (power % 2));
	}
	result = 1;
	i = 0;
	while (i < power)
	{
		result = result * nb;
		i = i + 1;
	}
	return (result);
}
