/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhervieu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/07 16:46:29 by jhervieu          #+#    #+#             */
/*   Updated: 2018/08/08 18:10:47 by jhervieu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcat(char *dest, char *src)
{
	int		i;
	int		length;

	length = 0;
	while (dest[length] != '\0')
	{
		length++;
	}
	i = 0;
	while (src[i] != '\0')
	{
		dest[length + i] = src[i];
		i = i + 1;
	}
	dest[i + length] = src[i];
	return (dest);
}
