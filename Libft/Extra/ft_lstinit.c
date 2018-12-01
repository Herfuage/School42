/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstinit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhervieu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/12 16:15:47 by jhervieu          #+#    #+#             */
/*   Updated: 2018/11/21 17:03:41 by jhervieu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstinit(t_list *lst, void (*del)(void*, size_t))
{
	if (lst == NULL)
	{
		return ;
	}
	if (lst->next != NULL)
	{
		ft_lstinit(lst->next, del);
	}
	(*del)(lst->content, lst->content_size);
}
