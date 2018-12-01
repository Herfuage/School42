/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdel.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhervieu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/12 16:21:57 by jhervieu          #+#    #+#             */
/*   Updated: 2018/11/17 19:46:27 by jhervieu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstdel(t_list **alst, void (*del)(void*, size_t))
{
	if (*alst == NULL)
	{
		return ;
	}
	if ((*alst)->next != NULL)
	{
		ft_lstdel(&((*alst)->next), del);
	}
	ft_lstdelone(alst, del);
}
