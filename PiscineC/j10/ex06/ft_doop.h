/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_doop.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhervieu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/14 19:04:41 by jhervieu          #+#    #+#             */
/*   Updated: 2018/08/16 17:39:29 by jhervieu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_DOOP_H
# define FT_DOOP_H

# include <unistd.h>

void	ft_init(char *op, int (*f[5])(int, int));
int		ft_op_index(char *str, char *op);
void	ft_putnbr(int n);
int		ft_atoi(char *str);
int		ft_add(int a, int b);
int		ft_diff(int a, int b);
int		ft_times(int a, int b);
int		ft_div(int a, int b);
int		ft_modulo(int a, int b);

#endif
