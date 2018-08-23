/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhervieu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/19 16:02:29 by jhervieu          #+#    #+#             */
/*   Updated: 2018/08/19 16:44:17 by jhervieu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef RUSH_H
# define RUSH_H

# include <unistd.h>
# include <stdlib.h>

void	ft_strcpy(char *dest, char *src, int n);

int		ft_allocate(char **tmp, char **str, int n);

int		ft_read_str(char **str);

int		ft_count_rows(char *str);

int		ft_count_cols(char *str, int *x);

void	ft_putnbr(int nbr);

int		ft_display(int ex, int x, int y, int *match);

int		ft_strcmp(char *s1, char *s2);

void	ft_check_rush(int x, int y, char *str, char *rush);

void	ft_print_line(int x, int start, char *pattern, char *rush);

void	ft_rush(int x, int y, char *pattern, char *rush);

int		ft_no_result(int status);

#endif
