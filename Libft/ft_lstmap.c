/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhervieu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/12 17:18:17 by jhervieu          #+#    #+#             */
/*   Updated: 2018/11/19 20:23:27 by jhervieu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, t_list *(*f)(t_list*))
{
	t_list	*dst;
	t_list	*cur;

	if (lst == NULL || f == NULL)
	{
		return (NULL);
	}
	dst = (*f)(lst);
	cur = dst;
	lst = lst->next;
	while (lst != NULL)
	{
		cur->next = (*f)(lst);
		if (cur->next == NULL)
		{
			return (NULL);
		}
		cur = cur->next;
		lst = lst->next;
	}
	return (dst);
}
