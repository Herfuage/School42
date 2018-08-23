/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhervieu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/06 04:18:07 by jhervieu          #+#    #+#             */
/*   Updated: 2018/08/07 17:24:39 by jhervieu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_sqrt(int nb)
{
	int delta;
	int start;
	int n;

	delta = 10000;
	start = 0;
	while (delta > 0)
	{
		n = start;
		while (n < 46341 && (n * n < nb))
		{
			n = n + delta;
		}
		start = n - delta;
		delta = delta / 10;
		if (n * n == nb)
		{
			return (n);
		}
	}
	return (0);
}
