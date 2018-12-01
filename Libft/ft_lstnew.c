/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhervieu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/12 15:33:55 by jhervieu          #+#    #+#             */
/*   Updated: 2018/11/21 19:05:47 by jhervieu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void const *content, size_t content_size)
{
	t_list	*lst;

	lst = (t_list*)malloc(sizeof(*lst));
	if (lst != NULL)
	{
		if (content == NULL)
		{
			lst->next = NULL;
			lst->content = NULL;
			lst->content_size = 0;
			return (lst);
		}
		lst->content = malloc(sizeof(*lst->content) * content_size);
		if (lst->content == NULL)
		{
			return (NULL);
		}
		ft_memcpy(lst->content, content, content_size);
		lst->content_size = content_size;
		lst->next = NULL;
	}
	return (lst);
}
