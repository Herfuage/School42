/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhervieu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/14 09:15:56 by jhervieu          #+#    #+#             */
/*   Updated: 2018/08/14 09:18:28 by jhervieu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "ft_abs.h"

int		main(void)
{
	int a;

	a = -15;
	printf("%d\n", ABS(32));
	printf("%d\n", ABS(-8));
	printf("%d\n", ABS(0));
	printf("%d\n", ABS(a));
	return (0);
}
