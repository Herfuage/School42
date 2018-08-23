/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_concat_params.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhervieu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/13 01:31:04 by jhervieu          #+#    #+#             */
/*   Updated: 2018/08/13 02:17:18 by jhervieu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_length(int argc, char **argv);

char	*ft_concat_params(int argc, char **argv)
{
	char	*str;
	int		i;
	int		j;
	int		n;

	n = ft_length(argc, argv);
	str = (char*)malloc((sizeof(*str)) * n);
	n = 0;
	i = 1;
	while (i < argc)
	{
		j = 0;
		while (argv[i][j] != '\0')
		{
			str[n] = argv[i][j];
			n = n + 1;
			j = j + 1;
		}
		str[n] = '\n';
		n = n + 1;
		i = i + 1;
	}
	n = n - 1;
	str[n] = '\0';
	return (str);
}

int		ft_length(int argc, char **argv)
{
	int i;
	int j;
	int n;

	n = 0;
	i = 1;
	while (i < argc)
	{
		j = 0;
		while (argv[i][j] != '\0')
		{
			n = n + 1;
			j = j + 1;
		}
		n = n + 1;
		i = i + 1;
	}
	return (n);
}
