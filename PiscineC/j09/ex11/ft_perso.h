/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_perso.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhervieu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/10 10:35:29 by jhervieu          #+#    #+#             */
/*   Updated: 2018/08/10 13:42:15 by jhervieu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PERSO_H
# define FT_PERSO_H
# define SAVE_THE_WORLD 0
# include <string.h>

typedef struct	s_perso
{
	char	*name;
	int		life;
	int		age;
	int		profession;
}				t_perso;

#endif
