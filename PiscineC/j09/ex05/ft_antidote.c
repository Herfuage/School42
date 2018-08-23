/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_antidote.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhervieu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/09 22:25:25 by jhervieu          #+#    #+#             */
/*   Updated: 2018/08/09 22:32:06 by jhervieu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_antidote(int i, int j, int k)
{
	if (i <= j)
	{
		if (j <= k)
			return (j);
		if (k <= i)
			return (i);
	}
	else
	{
		if (i <= k)
			return (i);
		if (k <= j)
			return (j);
	}
	return (k);
}