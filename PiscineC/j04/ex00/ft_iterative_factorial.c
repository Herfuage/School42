/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhervieu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/05 03:33:44 by jhervieu          #+#    #+#             */
/*   Updated: 2018/08/06 23:38:24 by jhervieu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_iterative_factorial(int nb)
{
	int factorial;
	int i;

	if (nb < 0 || nb > 12)
	{
		return (0);
	}
	factorial = 1;
	i = 1;
	while (i <= nb)
	{
		factorial = factorial * i;
		i = i + 1;
	}
	return (factorial);
}
