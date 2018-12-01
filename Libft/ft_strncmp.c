/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhervieu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/10 20:41:49 by jhervieu          #+#    #+#             */
/*   Updated: 2018/11/17 20:19:21 by jhervieu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	i = 0;
	while (s1[i] != '\0' && i < n && s1[i] == s2[i])
	{
		i = i + 1;
	}
	if (i == n)
	{
		return (0);
	}
	return ((int)((unsigned char)s1[i] - (unsigned char)s2[i]));
}
