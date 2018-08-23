/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_takes_place.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhervieu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/09 17:58:13 by jhervieu          #+#    #+#             */
/*   Updated: 2018/08/09 18:33:04 by jhervieu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_print_hour(int h);

void	ft_takes_place(int hour)
{
	printf("THE FOLLOWING TAKES PLACE BETWEEN ");
	if (hour == 24)
		hour = 0;
	ft_print_hour(hour);
	printf(" AND ");
	hour = hour + 1;
	if (hour == 24)
		hour = 0;
	ft_print_hour(hour);
	printf("\n");
}

void	ft_print_hour(int h)
{
	int is_morning;

	is_morning = 0;
	if (h < 12)
		is_morning = 1;
	else
		h = h - 12;
	if (h == 0)
		h = h + 12;
	printf("%d.00 ", h);
	if (is_morning == 1)
		printf("A.M.");
	else
		printf("P.M.");
}
