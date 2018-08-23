/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsq.h                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: grgauthi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/20 08:55:55 by grgauthi          #+#    #+#             */
/*   Updated: 2018/08/22 18:59:28 by jhervieu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BSQ_H
# define BSQ_H

# include <unistd.h>
# include <stdlib.h>
# include <fcntl.h>

# define ERR_MESS write(2, "map error\n", 10)

typedef struct s_metadata	t_metadata;

struct		s_metadata
{
	int		n_line;
	int		n_col;
	char	empty;
	char	obs;
	char	full;
	char	**grid;
};

typedef struct s_square		t_square;

struct		s_square
{
	int		i;
	int		j;
	int		size;
};

int			ft_strlen(char *str);

int			ft_str_is_numeric(char c);

char		*ft_strcpy(char *s1, char *s2);

void		ft_strcat(char	*s1, char *s2);

int			ft_atoi(char *str);

int			ft_is_auth(t_metadata *m_map, char c);

int			ft_set_metadata(int fd, t_metadata *m_map);

char		*ft_read_first_line(int fd, t_metadata *m_map);

int			ft_read_map(int fd);

void		ft_read_map_file(char *file);

int			ft_build_grid(int fd, t_metadata *m_map, char *f_line);

void		ft_print_map(t_metadata *m_map);

void		ft_merge_square(t_metadata *m_map, t_square *square);

int			ft_is_empty_cell(t_metadata *m_map, int i, int j);

int			ft_solve_map(t_metadata *map);

void		ft_max_square(t_metadata *m_map, t_square *square, int **grid);

#endif
