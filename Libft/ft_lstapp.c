/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstapp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhervieu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/12 17:23:42 by jhervieu          #+#    #+#             */
/*   Updated: 2018/11/21 18:40:19 by jhervieu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstapp(t_list **alst, t_list *new)
{
	t_list *cur;

	if (new != NULL)
	{
		if (*alst == NULL)
		{
			*alst = new;
		}
		else
		{
			cur = *alst;
			while (cur->next != NULL)
			{
				cur = cur->next;
			}
			cur->next = new;
		}
	}
}
