/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhervieu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/08 18:09:43 by jhervieu          #+#    #+#             */
/*   Updated: 2018/08/09 16:12:11 by jhervieu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_strlen(char *str);

char	*ft_strncat(char *dest, char *src, int nb)
{
	int	i;
	int	length;

	length = ft_strlen(dest);
	i = 0;
	if (nb < 0)
	{
		nb = ft_strlen(src) + 1;
	}
	while (i < nb)
	{
		dest[length + i] = src[i];
		if (src[i] == '\0')
		{
			return (dest);
		}
		i = i + 1;
	}
	return (dest);
}

int		ft_strlen(char *str)
{
	int length;

	length = 0;
	while (str[length] != '\0')
	{
		length++;
	}
	return (length);
}
