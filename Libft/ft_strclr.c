/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strclr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhervieu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/11 19:08:53 by jhervieu          #+#    #+#             */
/*   Updated: 2018/11/17 21:32:48 by jhervieu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_strclr(char *s)
{
	int		i;

	if (s != NULL)
	{
		i = 0;
		while (s[i] != '\0')
		{
			s[i] = '\0';
			i = i + 1;
		}
	}
}