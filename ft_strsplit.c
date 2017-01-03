/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilarbi <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/28 13:44:03 by ilarbi            #+#    #+#             */
/*   Updated: 2017/01/03 22:37:06 by ilarbi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include "libft.h"

static	int		ft_wordcount(char *string, char c)
{
	int		i;
	int		count;

	i = 0;
	count = 0;
	while (string[i] && c != 0)
	{
		if ((string[i] != c) && (string[i - 1] == c || i == 0))
			count++;
		i++;
	}
	return (count);
}
static	char	*ft_strfill(char **reader, char c)
{
	char	*str;
	size_t	word;
	size_t	j;

	str = NULL;
	word = 0;
	while (reader && !word)
	{
		printf("je rentre\n");
		j = 0;
		while ((*(*reader)++) != c)
			j++;
		if (j)
		{
			//allocation
			str = (char *)malloc(sizeof(char) * (j + 1));
			word = 1;
			//copie
			if (str)
			{
				if (*(*(reader + 1)) == 0 && *(*reader) != c)
				{
					ft_memcpy(str, *(reader - j + 1), j);
					ft_putstr("****if****");
				}
				else
				{
					ft_memcpy(str, *(reader - j), j);
					ft_putstr("++++else++++");
				}
				str[j] = '\0';
			}
		}
		//(*reader)++;
	}
	return ((reader && str) ? str : NULL);
}

char	**ft_strsplit(const char *s, char c)
{
	size_t	i;
	size_t	j;
	size_t	count;
	char	*reader;
	char	**words;

	i = 0;
	j = 0;
	words = NULL;
	if (s)
	{
		reader = (char *)s;
		count = ft_wordcount(reader, c);
		if (!(words = (char **)malloc(sizeof(char *) * (count + 1))))
			return (NULL);
		words[count] = 0;
		while (*reader && i < count)
		{
			printf("yes\n");
			words[i] = ft_strfill(&reader, c);
			i++;
			reader++;
		}
	}
	return ((s) ? words : NULL);
}

int		main(void)
{
	size_t	i;
	char	*s = "      split       this for   me  !       ";
	char	**args;

	i = 0;
	args = ft_strsplit(s, ' ');
	while (args[i])
	{

	}
	return (0);
}
