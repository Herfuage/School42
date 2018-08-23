/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: grgauthi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/03 12:12:39 by grgauthi          #+#    #+#             */
/*   Updated: 2018/08/03 14:08:40 by grgauthi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_atoi(char *str)
{
	int		start_position;
	int		res;
	int		i;
	int		sign;

	res = 0;
	start_position = 0;
	sign = 1;
	while (str[start_position] == ' ' ||
			(str[start_position] >= 9 && str[start_position] <= 13))
		start_position++;
	if (str[start_position] == '-')
	{
		sign = -1;
		start_position++;
	}
	else if (str[start_position] == '+')
		start_position++;
	i = start_position;
	while (str[i] >= 48 && str[i] <= 57)
	{
		res = 10 * res + (str[i] - '0');
		i++;
	}
	return (sign * res);
}
