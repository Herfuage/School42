/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhervieu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/13 17:45:21 by jhervieu          #+#    #+#             */
/*   Updated: 2018/08/15 01:53:07 by jhervieu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_get_index(char c, char *str);
int		ft_digits(int n, int base_size);
int		ft_len(char *str);
char	*ft_calc_res(int n, char *base, char *res, int s);

char	*ft_convert_base(char *nbr, char *base_from, char *base_to)
{
	char		*res;
	long int	n;
	int			i;
	int			nb_digits;
	int			s;

	n = 0;
	i = 0;
	s = 0;
	if (nbr[0] == '+' || nbr[0] == '-')
	{
		if (nbr[0] == '-')
			s = 1;
		i = i + 1;
	}
	while (i < ft_len(nbr))
	{
		n = n * ft_len(base_from) + ft_get_index(nbr[i], base_from);
		i = i + 1;
	}
	nb_digits = ft_digits(n, ft_len(base_to));
	res = (char*)malloc(sizeof(res) * (nb_digits + s + 1));
	res[nb_digits] = '\0';
	return (ft_calc_res(n, base_to, res, s));
}

char	*ft_calc_res(int n, char *base, char *res, int s)
{
	int i;
	int nb_digits;

	i = 0;
	nb_digits = ft_digits(n, ft_len(base));
	while (i < nb_digits)
	{
		res[nb_digits + s - 1 - i] = base[n % ft_len(base)];
		n = n / ft_len(base);
		i = i + 1;
	}
	if (s == 1)
	{
		res[0] = '-';
	}
	return (res);
}

int		ft_digits(int n, int base_size)
{
	long int	pow;
	int			nb_digits;

	pow = 1;
	nb_digits = 1;
	while (pow < n / base_size)
	{
		pow = pow * base_size;
		nb_digits = nb_digits + 1;
	}
	return (nb_digits);
}

int		ft_get_index(char c, char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		if (c == str[i])
		{
			return (i);
		}
		i = i + 1;
	}
	return (-1);
}

int		ft_len(char *str)
{
	int n;

	n = 0;
	while (str[n] != '\0')
	{
		n = n + 1;
	}
	return (n);
}
