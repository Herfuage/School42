/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_auth.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: grgauthi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/20 15:08:46 by grgauthi          #+#    #+#             */
/*   Updated: 2018/08/22 13:10:29 by grgauthi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/bsq.h"

int		ft_is_auth(t_metadata *m_map, char c)
{
	int		res;

	res = 0;
	if (c == m_map->empty || c == m_map->obs)
		res = 1;
	return (res);
}
