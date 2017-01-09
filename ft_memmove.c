/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilarbi <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/22 14:42:09 by ilarbi            #+#    #+#             */
/*   Updated: 2017/01/09 18:09:09 by ilarbi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <stdlib.h>

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	char		*d;
	const char	*s;

	s = (const char *)src;
	d = (char *)dst;
	if (len == 0 || *s == '\0')
		return (dst);
	if (dst <= src)
	{
		return (ft_memcpy(dst, src, len));
	}
	else
	{
		s += len - 1;
		d += len - 1;
		while (len--)
		{
			*d-- = *s--;
		}
	}
	return (dst);
}

int		main(void)
{
	/*char s1[101];
	char s2[101];
	char t1[101];
	char t2[101];
	char	str[] = "memmove can be very useful......";
	char	str2[] = "memmove can be very useful......";
	char	str3[] = "memmove can be very useful......";
	char	str4[] = "memmove can be very useful......";
	int j = 0;

	j = 0;
	s1[100] = 0;
	s2[100] = 0;
	while (j < 100)
	{
		s1[j] = (char)rand();
		s2[j] = (char)rand();
		j++;
	}
	memcpy(t1, s1, sizeof(s1));
	memcpy(t2, s2, sizeof(s2));
	printf("%d\n",strcmp(memmove(str + 10, str + 5, 10), ft_memmove(str2 + 10, str2 + 5, 10)));
	printf ("%d\n", strcmp(memmove(str3 + 5, str3 + 10, 10), ft_memmove(str4 + 5, str4 + 10, 10)));
	printf("%d\n", strcmp(memmove(s1, s2, 2), ft_memmove(t1, t2, 2)));
	printf("%d\n", strcmp(memmove(s1, s1 + 25, 30), ft_memmove(t1, t1 + 25, 30)));
	printf("%d\n", strcmp(memmove(s1 + 30, s1, 40), ft_memmove(t1 + 30, t1, 40)));
	//	printf("memmove : %d\n", strcmp(memmove(s1, s1 + 25, 30), ft_memmove(s2, s2 + 25, 30)));
	return (0);*/

	//int				uf_test_memmove(void)
	//{
		char		str[] = "memmove can be very useful......";
		char		str2[] = "memmove can be very useful......";
		char		str3[] = "memmove can be very useful......";
		char		str4[] = "memmove can be very useful......";

		char		s1[101], t1[101];
		char		s2[101], t2[101];
		size_t		i, j;

		i = 0;
		while (i < 10)
		{
			j = 0;
			while (j < 100)
			{
				s1[j] = (char)rand();
				s2[j] = (char)rand();
				j++;
			}
			s1[100] = 0;    s2[100] = 0;
			memcpy(t1, s1, sizeof(s1));
			memcpy(t2, s2, sizeof(s2));
			if (strcmp(memmove(str + 10, str + 5, 10), ft_memmove(str2 + 10, str2 + 5, 10)) != 0)
				printf("%d\n",strcmp(memmove(str + 10, str + 5, 10), ft_memmove(str2 + 10, str2 + 5, 10)));
			if (strcmp(memmove(str3 + 5, str3 + 10, 10), ft_memmove(str4 + 5, str4 + 10, 10)) != 0)
				printf ("%d\n", strcmp(memmove(str3 + 5, str3 + 10, 10), ft_memmove(str4 + 5, str4 + 10, 10)));
			if (strcmp(memmove(s1, s2, 2), ft_memmove(t1, t2, 2)) != 0)
				printf("%d\n", strcmp(memmove(s1, s2, 2), ft_memmove(t1, t2, 2)));
			if (strcmp(memmove(s1, s1 + 25, 30), ft_memmove(t1, t1 + 25, 30)) != 0)
				printf("%d\n", strcmp(memmove(s1, s1 + 25, 30), ft_memmove(t1, t1 + 25, 30)));
			if (strcmp(memmove(s1 + 30, s1, 40), ft_memmove(t1 + 30, t1, 40)) != 0)
				printf("%d\n", strcmp(memmove(s1 + 30, s1, 40), ft_memmove(t1 + 30, t1, 40)));
			++i;
		}
		return (1);
	}
