/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhervieu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/08 18:15:18 by jhervieu          #+#    #+#             */
/*   Updated: 2018/08/12 16:43:11 by jhervieu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_get_index(char c, char *base);
int		ft_strlen(char *str);
int		ft_check_base(char *base, int base_size);
int		ft_check_str(char *str, char *base);

int		ft_atoi_base(char *str, char *base)
{
	int		i;
	int		s;
	int		n;
	int		base_size;

	base_size = ft_strlen(base);
	if (ft_check_base(base, base_size) == 0 || ft_check_str(str, base) == 0)
		return (0);
	i = 0;
	while (str[i] == ' ' || (str[i] >= 9 && str[i] <= 13))
		i = i + 1;
	s = 1;
	if (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
			s = -1;
		i = i + 1;
	}
	n = 0;
	while (ft_get_index(str[i], base) >= 0)
	{
		n = n * base_size + ft_get_index(str[i], base);
		i = i + 1;
	}
	return (n * s);
}

int		ft_get_index(char c, char *base)
{
	int i;

	i = 0;
	while (base[i] != '\0')
	{
		if (c == base[i])
		{
			return (i);
		}
		i = i + 1;
	}
	return (-1);
}

int		ft_strlen(char *str)
{
	int length;

	length = 0;
	while (str[length] != '\0')
	{
		length = length + 1;
	}
	return (length);
}

int		ft_check_base(char *base, int base_size)
{
	int i;
	int j;

	if (base_size < 2)
		return (0);
	i = 0;
	while (i < base_size - 1)
	{
		if (base[i] == '+' || base[i] == '-')
			return (0);
		j = i + 1;
		while (j < base_size)
		{
			if (base[i] == base[j])
				return (0);
			j = j + 1;
		}
		i = i + 1;
	}
	return (1);
}

int		ft_check_str(char *str, char *base)
{
	int in_base;
	int i;
	int j;

	i = 0;
	while (str[i] != '\0')
	{
		in_base = 0;
		j = 0;
		while (base[j] != '\0')
		{
			if (str[i] == base[j])
			{
				in_base = 1;
			}
			j = j + 1;
		}
		if (in_base == 0)
		{
			return (0);
		}
		i = i + 1;
	}
	return (1);
}
