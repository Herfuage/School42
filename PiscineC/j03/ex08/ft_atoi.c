/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhervieu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/04 11:57:21 by jhervieu          #+#    #+#             */
/*   Updated: 2018/08/04 12:03:45 by jhervieu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_read_spaces(char *str);
int		ft_read_sign(char *str, int *i);

int		ft_atoi(char *str)
{
	int		i;
	int		s;
	int		n;

	i = ft_read_spaces(str);
	s = ft_read_sign(str, &i);
	n = 0;
	while (str[i] != '\0')
	{
		if (str[i] < '0' || str[i] > '9')
		{
			return (n * s);
		}
		n = n * 10 + str[i] - '0';
		i = i + 1;
	}
	return (n * s);
}

int		ft_read_spaces(char *str)
{
	int i;

	i = 0;
	while (str[i] == ' ' || str[i] == '\n' || str[i] == '\t'
		|| str[i] == '\r' || str[i] == '\v' || str[i] == '\f')
	{
		i = i + 1;
	}
	return (i);
}

int		ft_read_sign(char *str, int *i)
{
	if (str[*i] == '-')
	{
		*i = *i + 1;
		return (-1);
	}
	if (str[*i] == '+')
	{
		*i = *i + 1;
	}
	return (1);
}
