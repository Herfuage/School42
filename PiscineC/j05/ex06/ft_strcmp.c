/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhervieu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/07 15:56:04 by jhervieu          #+#    #+#             */
/*   Updated: 2018/08/09 13:53:12 by jhervieu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_strcmp(char *s1, char *s2)
{
	int i;

	i = 0;
	while (s1[i] != '\0')
	{
		if (s1[i] - s2[i] != 0)
		{
			return ((unsigned char)s1[i] - (unsigned char)s2[i]);
		}
		i = i + 1;
	}
	return ((unsigned char)s1[i] - (unsigned char)s2[i]);
}
