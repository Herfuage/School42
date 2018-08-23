/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   match.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhervieu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/12 17:05:57 by jhervieu          #+#    #+#             */
/*   Updated: 2018/08/12 17:07:12 by jhervieu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_match(char *s1, char*s2, int *tab);
int		ft_copy(char *s1, char *s2, char *cp1, int *newtab);
int		ft_test(char *s1, char *s2, int *tab, int *count);
int		len(char *str);

int		match(char *s1, char *s2)
{
	int		tab[4];
	int		count;
	int		i;
	int		j;

	i = 0;
	j = 0;
	while (s1[i] != '\0')
		i = i + 1;
	while (s2[j] != '\0')
		j = j + 1;
	tab[0] = i + j + 1;
	tab[1] = 0;
	tab[2] = 0;
	count = ft_match(s1, s2, tab);
	if (count > 0)
		return (1);
	return (0);
}

int		ft_match(char *s1, char *s2, int *tab)
{
	char	cp1[tab[0]];
	int		newtab[4];
	int		i;
	int		j;
	int		count;

	if (ft_test(s1, s2, tab, &count) == 1)
		return (count);
	i = 0;
	count = 0;
	while (i <= len(s1) - tab[1])
	{
		j = -1;
		while (s1[tab[1] + (++j)] != '\0')
			cp1[j] = s1[tab[1] + j];
		cp1[j] = s1[tab[1] + j];
		newtab[0] = tab[0];
		newtab[1] = tab[1];
		newtab[2] = tab[2];
		newtab[3] = i;
		count = count + ft_copy(s1, s2, cp1, newtab);
		i = i + 1;
	}
	return (count);
}

int		ft_copy(char *s1, char *s2, char *cp1, int *newtab)
{
	char	cp2[newtab[0]];
	int		j;
	int		k;

	j = 0;
	while (j < newtab[3])
	{
		cp2[j] = s1[newtab[1] + j];
		j = j + 1;
	}
	k = 1;
	while (s2[newtab[2] + k] != '\0')
	{
		cp2[j - 1 + k] = s2[newtab[2] + k];
		k = k + 1;
	}
	cp2[j - 1 + k] = s2[newtab[2] + k];
	newtab[0] = len(cp1) + len(cp2);
	newtab[1] = 0;
	newtab[2] = 0;
	return (ft_match(cp1, cp2, newtab));
}

int		ft_test(char *s1, char *s2, int *tab, int *count)
{
	if (s1[tab[1]] == '\0' && s2[tab[2]] == '\0')
	{
		*count = 1;
		return (1);
	}
	if (s1[tab[1]] == s2[tab[2]])
	{
		tab[1] = tab[1] + 1;
		tab[2] = tab[2] + 1;
		*count = ft_match(s1, s2, tab);
		tab[1] = tab[1] - 1;
		tab[2] = tab[1] - 1;
		return (1);
	}
	if (s2[tab[2]] != '*')
	{
		*count = 0;
		return (1);
	}
	return (0);
}

int		len(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		i = i + 1;
	}
	return (i);
}
