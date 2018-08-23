/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhervieu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/07 03:04:41 by jhervieu          #+#    #+#             */
/*   Updated: 2018/08/08 18:02:20 by jhervieu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	i;
	int				is_src_end;

	is_src_end = 0;
	i = 0;
	while (i < n)
	{
		if (src[i] == '\0')
		{
			is_src_end = 1;
		}
		if (is_src_end == 0)
		{
			dest[i] = src[i];
		}
		else
		{
			dest[i] = '\0';
		}
		i = i + 1;
	}
	return (dest);
}
