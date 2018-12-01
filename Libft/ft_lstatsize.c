/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstatsize.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhervieu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/23 16:33:05 by jhervieu          #+#    #+#             */
/*   Updated: 2018/11/23 16:40:45 by jhervieu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstatsize(t_list *lst, size_t size)
{
	while (lst != NULL)
	{
		if (lst->content_size == size)
		{
			return (lst);
		}
		lst = lst->next;
	}
	return (NULL);
}
