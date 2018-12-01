/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhervieu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/11 17:48:17 by jhervieu          #+#    #+#             */
/*   Updated: 2018/11/21 18:47:12 by jhervieu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include "libft.h"

int		main(int argc, char **argv)
{
	char	**t;
	char	*s;
	int		i;
	int		len;
	int		*a;
	t_list	*lst;

	if (argc == 6 && ft_strcmp(argv[1], "memset") == 0)
	{
		len = atoi(argv[4]);
		if (len >= 0)
		{
			s = (char*)ft_memset(argv[2], atoi(argv[3]), len);
			i = 0;
			while (i < atoi(argv[5]))
			{
				printf("%c", s[i]);
				i = i + 1;
			}
		}
	}
	else if (argc > 0 && ft_strcmp(argv[1], "man memset") == 0)
	{
		printf("1. Destination string\n");
		printf("2. Source unsigned char (from 0 to 255)\n");
		printf("3. Amount of chars to copy\n");
		printf("4. Amount of chars displayed on screen\n");
	}
	if (argc == 5 && ft_strcmp(argv[1], "bzero") == 0)
	{
		len = atoi(argv[3]);
		if (len >= 0)
		{
			ft_bzero(argv[2], len);
			i = 0;
			while (i < atoi(argv[4]))
			{
				printf("%c", argv[2][i]);
				i = i + 1;
			}
		}
	}
	else if (argc > 0 && ft_strcmp(argv[1], "man bzero") == 0)
	{
		printf("1. Destination string\n");
		printf("2. Amount of chars to zero-set\n");
		printf("3. Amount of chars displayed on screen\n");
	}
	else if (argc == 6 && ft_strcmp(argv[1], "memcpy") == 0)
	{
		len = atoi(argv[4]);
		if (len >= 0)
		{
			s = (char*)ft_memcpy(argv[2], argv[3], len);
			i = 0;
			while (i < atoi(argv[5]))
			{
				printf("%c", s[i]);
				i = i + 1;
			}
		}
	}
	else if (argc > 0 && ft_strcmp(argv[1], "man memcpy") == 0)
	{
		printf("1. Destination string\n");
		printf("2. Source string\n");
		printf("3. Amount of chars to copy\n");
		printf("4. Amount of chars displayed on screen\n");
	}
	else if (argc == 7 && ft_strcmp(argv[1], "memccpy") == 0)
	{
		len = atoi(argv[5]);
		if (len >= 0)
		{
			s = (char*)ft_memccpy(argv[2], argv[3], argv[4][0], len);
			i = 0;
			while (i < atoi(argv[6]))
			{
				printf("%c", s[i]);
				i = i + 1;
			}
		}
	}
	else if (argc > 0 && ft_strcmp(argv[1], "man memccpy") == 0)
	{
		printf("1. Destination string\n");
		printf("2. Source string\n");
		printf("3. Char where to stop\n");
		printf("4. Amount of chars to copy\n");
		printf("5. Amount of chars displayed on screen\n");
	}
	else if (argc == 6 && ft_strcmp(argv[1], "memmove") == 0)
	{
		len = atoi(argv[4]);
		if (len >= 0)
		{
			s = (char*)ft_memmove(argv[2], argv[3], len);
			i = 0;
			while (i < atoi(argv[5]))
			{
				printf("%c", s[i]);
				i = i + 1;
			}
		}
	}
	else if (argc > 0 && ft_strcmp(argv[1], "man memmove") == 0)
	{
		printf("1. Destination string\n");
		printf("2. Source string\n");
		printf("3. Amount of chars to copy\n");
		printf("4. Amount of chars displayed on screen\n");
	}
	else if (argc == 6 && ft_strcmp(argv[1], "memchr") == 0)
	{
		len = atoi(argv[4]);
		if (len >= 0)
		{
			s = (char*)ft_memchr(argv[2], argv[3][0], len);
			i = 0;
			while (i < atoi(argv[5]))
			{
				printf("%c", s[i]);
				i = i + 1;
			}
		}
	}
	else if (argc > 0 && ft_strcmp(argv[1], "man memchr") == 0)
	{
		printf("1. Haystack string\n");
		printf("2. Needle char\n");
		printf("3. Length to search in\n");
		printf("4. Amount of chars displayed on screen\n");
	}
	else if (argc == 5 && ft_strcmp(argv[1], "memcmp") == 0)
	{
		len = atoi(argv[4]);
		if (len >= 0)
		{
			printf("%i", ft_memcmp(argv[2], argv[3], len));
		}
	}
	else if (argc > 0 && ft_strcmp(argv[1], "man memcmp") == 0)
	{
		printf("1. First string\n");
		printf("2. Second string\n");
		printf("3. Length to compare\n");
	}
	else if (argc == 3 && ft_strcmp(argv[1], "strlen") == 0)
	{
		printf("%zu", ft_strlen(argv[2]));
	}
	else if (argc > 0 && ft_strcmp(argv[1], "man strlen") == 0)
	{
		printf("1. String whose length will be computed\n");
	}
	else if (argc == 3 && ft_strcmp(argv[1], "strdup") == 0)
	{
		s = ft_strdup(argv[2]);
		if (s != NULL)
		{
			printf("%s", s);
			free(s);
		}
	}
	else if (argc > 0 && ft_strcmp(argv[1], "man strdup") == 0)
	{
		printf("1. String to duplicate\n");
	}
	else if (argc == 4 && ft_strcmp(argv[1], "strcpy") == 0)
	{
		printf("%s", ft_strcpy(argv[2], argv[3]));
	}
	else if (argc > 0 && ft_strcmp(argv[1], "man strcpy") == 0)
	{
		printf("1. Destination string\n");
		printf("2. Source string\n");
	}
	else if (argc == 5 && ft_strcmp(argv[1], "strncpy") == 0)
	{
		printf("%s", ft_strncpy(argv[2], argv[3], atoi(argv[4])));
	}
	else if (argc > 0 && ft_strcmp(argv[1], "man strncpy") == 0)
	{
		printf("1. Destination string\n");
		printf("2. Source string\n");
		printf("3. Max length to copy\n");
	}
	else if (argc == 5 && ft_strcmp(argv[1], "strcat") == 0)
	{
		printf("%s", ft_strcat(argv[2], argv[3]));
	}
	else if (argc > 0 && ft_strcmp(argv[1], "man strcat") == 0)
	{
		printf("1. Destination string\n");
		printf("2. Source string\n");
	}
	else if (argc == 5 && ft_strcmp(argv[1], "strncat") == 0)
	{
		printf("%s", ft_strncat(argv[2], argv[3], atoi(argv[4])));
	}
	else if (argc > 0 && ft_strcmp(argv[1], "man strncat") == 0)
	{
		printf("1. Destination string\n");
		printf("2. Source string\n");
		printf("3. Max length to cat\n");
	}
	else if (argc == 5 && ft_strcmp(argv[1], "strlcat") == 0)
	{
		printf("%zu", ft_strlcat(argv[2], argv[3], atoi(argv[4])));
	}
	else if (argc > 0 && ft_strcmp(argv[1], "man strlcat") == 0)
	{
		printf("1. First string\n");
		printf("2. Second string\n");
		printf("3. Buffer size\n");
	}
	else if (argc == 5 && ft_strcmp(argv[1], "strnstr") == 0)
	{
		printf("ft_strnstr :\n");
		printf("%s\n", ft_strnstr(argv[2], argv[3], atoi(argv[4])));
		printf("strnstr : \n");
		printf("%s", strnstr(argv[2], argv[3], atoi(argv[4])));
	}
	else if (argc > 0 && ft_strcmp(argv[1], "man strnstr") == 0)
	{
		printf("1. Haystack string\n");
		printf("2. Needle string\n");
		printf("3. Max length to search in\n");
	}
	else if (argc == 4 && ft_strcmp(argv[1], "strsplit") == 0)
	{
		t = ft_strsplit(argv[2], argv[3][0]);
		i = 0;
		while (t[i] != 0)
		{
			printf("%s\n", t[i]);
			i = i + 1;
		}
	}
	else if (argc > 0 && ft_strcmp(argv[1], "man strsplit") == 0)
	{
		printf("1. String to split\n");
		printf("2. Char delimiting cuts\n");
	}
	else if (argc == 3 && ft_strcmp(argv[1], "sign") == 0)
	{
		printf("Sign(%i) = %i", atoi(argv[2]), ft_sign(atoi(argv[2])));
	}
	else if (argc > 0 && ft_strcmp(argv[1], "man sign") == 0)
	{
		printf("1. Integer whose sign will be computed\n");
	}
	else if (argc == 3 && ft_strcmp(argv[1], "abs") == 0)
	{
		printf("|%i| = %i", atoi(argv[2]), ft_abs(atoi(argv[2])));
	}
	else if (argc > 0 && ft_strcmp(argv[1], "man abs") == 0)
	{
		printf("1. Integer whose absolute value will be computed\n");
	}
	else if (argc == 4 && ft_strcmp(argv[1], "min") == 0)
	{
		printf("Min(%i, %i) = ", atoi(argv[2]), atoi(argv[3]));
		printf("%i", ft_min(atoi(argv[2]), atoi(argv[3])));
	}
	else if (argc > 0 && ft_strcmp(argv[1], "man min") == 0)
	{
		printf("1. First integer\n");
		printf("2. Second integer\n");
	}
	else if (argc == 4 && ft_strcmp(argv[1], "max") == 0)
	{
		printf("Max(%i, %i) = ", atoi(argv[2]), atoi(argv[3]));
		printf("%i", ft_min(atoi(argv[2]), atoi(argv[3])));
	}
	else if (argc > 0 && ft_strcmp(argv[1], "man max") == 0)
	{
		printf("1. First integer\n");
		printf("2. Second integer\n");
	}
	else if (argc > 2 && ft_strcmp(argv[1], "amin") == 0)
	{
		a = (int*)malloc(sizeof(*a) * (argc - 2));
		if (a != NULL)
		{
			i = 0;
			while (i < argc - 2)
			{
				a[i] = atoi(argv[2 + i]);
				i = i + 1;
			}
			printf("Min = %i", ft_amin(a, argc - 2));
			free(a);
		}
	}
	else if (argc > 0 && ft_strcmp(argv[1], "amin") == 0)
	{
		printf("List of integers (one integer in each argument)\n");
	}
	else if (argc > 2 && ft_strcmp(argv[1], "amax") == 0)
	{
		a = (int*)malloc(sizeof(*a) * (argc - 2));
		if (a != NULL)
		{
			i = 0;
			while (i < argc - 2)
			{
				a[i] = atoi(argv[2 + i]);
				i = i + 1;
			}
			printf("Max = %i", ft_amax(a, argc - 2));
			free(a);
		}
	}
	else if (argc > 0 && ft_strcmp(argv[1], "amax") == 0)
	{
		printf("List of integers (one integer in each argument)\n");
	}
	else if (argc == 2 && ft_strcmp(argv[1], "isupper") == 0)
	{
		printf("isupper(%c) = %i", argv[2][0], ft_isupper(argv[2][0]));
	}
	else if (argc > 0 && ft_strcmp(argv[1], "man isupper") == 0)
	{
		printf("1. Char to test");
	}
	else if (argc == 2 && ft_strcmp(argv[1], "islower") == 0)
	{
		printf("islower(%c) = %i", argv[2][0], ft_islower(argv[2][0]));
	}
	else if (argc > 0 && ft_strcmp(argv[1], "man islower") == 0)
	{
		printf("1. Char to test");
	}
	else if (argc == 2 && ft_strcmp(argv[1], "isspace") == 0)
	{
		printf("isspace(%c) = %i", argv[2][0], ft_isspace(argv[2][0]));
	}
	else if (argc > 0 && ft_strcmp(argv[1], "man isspace") == 0)
	{
		printf("1. Char to test");
	}
	else if (argc == 3 && ft_strcmp(argv[1], "strrev") == 0)
	{
		printf("%s", ft_strrev(argv[2]));
	}
	else if (argc > 0 && ft_strcmp(argv[1], "strrev") == 0)
	{
		printf("1. String to reverse\n");
	}
	else if (argc > 2 && ft_strcmp(argv[1], "lstapp") == 0)
	{
		lst = NULL;
		i = 2;
		while (i < argc)
		{
			ft_lstapp(&lst, ft_lstnew(argv[i], ft_strlen(argv[i])));
			i = i + 1;
		}
		while (lst != NULL)
		{
			printf("%s\n", lst->content);
			lst = lst->next;
		}
	}
	else if (argc > 0 && ft_strcmp(argv[1], "") == 0)
	{
		printf("1. Contents of the list (each content in one argument)");
	}
	return (0);
}
