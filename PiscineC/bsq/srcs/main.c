/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: grgauthi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/20 10:44:42 by grgauthi          #+#    #+#             */
/*   Updated: 2018/08/22 16:55:30 by jhervieu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/bsq.h"

int		main(int argc, char **argv)
{
	int		i;

	if (argc == 1)
	{
		if (ft_read_map(STDIN_FILENO) == 0)
		{
			ERR_MESS;
			return (0);
		}
	}
	else
	{
		i = 1;
		while (i < argc)
		{
			ft_read_map_file(argv[i]);
			if (i != argc - 1)
			{
				write(1, "\n", 1);
			}
			i++;
		}
	}
	return (0);
}
