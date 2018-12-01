/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhervieu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/19 16:51:40 by jhervieu          #+#    #+#             */
/*   Updated: 2018/11/19 20:06:15 by jhervieu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	test(int *n)
{
	int		i;

	i = 0;
	if (*n < 0)
	{
		if (*n == -2147483648)
		{
			*n = -147483648;
			i = i + 1;
		}
		*n = -(*n);
		i = i + 1;
	}
	return (i);
}

static int	digits(int n)
{
	int		d;

	d = 1;
	while (n > 9)
	{
		n = n / 10;
		d = d + 1;
	}
	return (d);
}

char		*ft_itoa(int n)
{
	char	*s;
	int		i;
	int		d;

	i = test(&n);
	d = digits(n);
	s = (char*)malloc(sizeof(*s) * (i + d + 1));
	if (s != NULL)
	{
		if (i > 0)
			s[0] = '-';
		if (i == 2)
			s[1] = '2';
		s[i + d] = '\0';
		while (d > 0)
		{
			d = d - 1;
			s[i + d] = n % 10 + '0';
			n = n / 10;
		}
	}
	return (s);
}
