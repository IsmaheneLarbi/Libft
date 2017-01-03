/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilarbi <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/27 16:44:20 by ilarbi            #+#    #+#             */
/*   Updated: 2017/01/03 19:10:40 by ilarbi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

char	*ft_strtrim(char const *s)
{
	size_t	start;
	size_t	end;
	char	*fresh;

	start = 0;
	if (s)
	{
		end = ft_strlen(s) - 1;
		while (s[start] == ' ' || s[start] == '\n' || s[start] == '\t')
			start++;
	/*	if (end == 0 || start == end + 1)
		{	
			fresh = (char *)malloc(1);
			*fresh = '\0';
			return (fresh);
		}*/
		if (end == 0 || start == end + 1)
			return ("");
		while (s[end] == ' ' || s[end] == '\n' || s[end] == '\t')
			end--;
		fresh = (char *)malloc(sizeof(char) * (end - start + 2));
		if (fresh != NULL)
		{
			ft_memcpy(fresh, &s[start], end - start + 1);
			fresh[end - start + 1] = '\0';
		}
	}
	return ((s) ? fresh : NULL);
}
