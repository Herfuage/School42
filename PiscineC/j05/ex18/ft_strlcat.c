/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhervieu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/07 17:51:48 by jhervieu          #+#    #+#             */
/*   Updated: 2018/08/09 16:19:00 by jhervieu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlen(char *str);

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int		i;
	unsigned int		src_length;
	unsigned int		dest_length;
	unsigned int		tot_length;

	src_length = ft_strlen(src);
	dest_length = ft_strlen(dest);
	tot_length = src_length + dest_length;
	if (size < dest_length)
	{
		return (size + src_length);
	}
	i = 0;
	while (i <= src_length)
	{
		dest[dest_length + i] = src[i];
		i = i + 1;
	}
	return (tot_length);
}

unsigned int	ft_strlen(char *str)
{
	unsigned int		length;

	length = 0;
	while (str[length] != '\0')
	{
		length++;
	}
	return (length);
}
