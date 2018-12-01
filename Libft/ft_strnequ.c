/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnequ.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhervieu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/11 19:48:06 by jhervieu          #+#    #+#             */
/*   Updated: 2018/11/19 17:03:04 by jhervieu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_strnequ(const char *s1, const char *s2, size_t n)
{
	if (s1 != NULL && s2 != NULL && ft_strncmp(s1, s2, n) == 0)
	{
		return (1);
	}
	return (0);
}