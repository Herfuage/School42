/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_collatz_conjecture.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhervieu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/10 09:19:13 by jhervieu          #+#    #+#             */
/*   Updated: 2018/08/10 09:34:34 by jhervieu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_collatz_conjecture(unsigned int base)
{
	unsigned int flight;

	flight = 0;
	if (base == 1)
	{
		return (flight);
	}
	if (base % 2 == 0)
	{
		base = base / 2;
	}
	else
	{
		base = 3 * base + 1;
	}
	flight = ft_collatz_conjecture(base);
	return (flight + 1);
}
