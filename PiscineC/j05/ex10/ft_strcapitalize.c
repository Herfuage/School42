/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhervieu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/07 12:16:14 by jhervieu          #+#    #+#             */
/*   Updated: 2018/08/09 14:40:54 by jhervieu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_is_alphanum(char c);
void	ft_strlowcase(char *str);

char	*ft_strcapitalize(char *str)
{
	int		i;
	int		capitalize;

	ft_strlowcase(str);
	capitalize = 1;
	i = 0;
	while (str[i] != '\0')
	{
		if (ft_is_alphanum(str[i]) == 0)
			capitalize = 1;
		else
		{
			if (capitalize == 1 && ft_is_alphanum(str[i]))
			{
				capitalize = 0;
				if (str[i] >= 'a' && str[i] <= 'z')
					str[i] = str[i] - 'a' + 'A';
			}
		}
		i = i + 1;
	}
	return (str);
}

void	ft_strlowcase(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
		{
			str[i] = str[i] - 'A' + 'a';
		}
		i = i + 1;
	}
}

int		ft_is_alphanum(char c)
{
	int		is_alphanum;

	is_alphanum = 0;
	if (c >= '0' && c <= '9')
	{
		is_alphanum = 1;
	}
	if (c >= 'a' && c <= 'z')
	{
		is_alphanum = 1;
	}
	if (c >= 'A' && c <= 'Z')
	{
		is_alphanum = 1;
	}
	return (is_alphanum);
}
