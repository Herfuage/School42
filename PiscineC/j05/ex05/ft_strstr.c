/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhervieu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/07 14:41:09 by jhervieu          #+#    #+#             */
/*   Updated: 2018/08/07 15:16:15 by jhervieu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_test_occur(char *str, int start, char *to_find);

char	*ft_strstr(char *str, char *to_find)
{
	int		i;

	if (to_find[0] == '\0')
	{
		return (str);
	}
	i = 0;
	while (str[i] != 0)
	{
		if (str[i] == to_find[0])
		{
			if (ft_test_occur(str, i, to_find) == 1)
			{
				return (str + i);
			}
		}
		i = i + 1;
	}
	return (0);
}

int		ft_test_occur(char *str, int start, char *to_find)
{
	int i;

	i = 0;
	while (to_find[i] != '\0')
	{
		if (str[start + i] != to_find[i])
		{
			return (0);
		}
		i = i + 1;
	}
	return (1);
}
