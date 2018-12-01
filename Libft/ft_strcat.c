/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhervieu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/19 16:52:33 by jhervieu          #+#    #+#             */
/*   Updated: 2018/11/19 17:27:44 by jhervieu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strcat(char *s1, const char *s2)
{
	size_t	start;
	size_t	i;

	start = 0;
	while (s1[start] != '\0')
	{
		start = start + 1;
	}
	i = 0;
	while (s2[i] != '\0')
	{
		s1[start + i] = s2[i];
		i = i + 1;
	}
	s1[start + i] = '\0';
	return (s1);
}
