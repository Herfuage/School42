/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhervieu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/09 10:30:35 by jhervieu          #+#    #+#             */
/*   Updated: 2018/08/13 17:12:31 by jhervieu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_putstr(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		ft_putchar(str[i]);
		i = i + 1;
	}
}

int		ft_strcmp(char *s1, char *s2)
{
	int i;

	i = 0;
	while (s1[i] != '\0' && s2[i] != '\0')
	{
		if (s1[i] != s2[i])
		{
			return (s1[i] - s2[i]);
		}
		i = i + 1;
	}
	return (s1[i] - s2[i]);
}

int		main(int argc, char **argv)
{
	char	*tmp;
	int		min;
	int		i;
	int		j;

	i = 1;
	while (i < argc)
	{
		min = i;
		j = i + 1;
		while (j < argc)
		{
			if (ft_strcmp(argv[min], argv[j]) > 0)
			{
				min = j;
			}
			j = j + 1;
		}
		tmp = argv[min];
		argv[min] = argv[i];
		argv[i] = tmp;
		ft_putstr(argv[i]);
		ft_putchar('\n');
		i = i + 1;
	}
}
