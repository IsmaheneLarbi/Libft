/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilarbi <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/13 19:21:43 by ilarbi            #+#    #+#             */
/*   Updated: 2016/12/31 14:49:40 by ilarbi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdlib.h>
#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	j;
	char	*ptr;

	i = 0;
	ptr = (char *)malloc(sizeof(char *) * (ft_strlen(big) + 1));
	if (ptr == NULL || (big[0] == '\0' && little[0] != '\0'))
		return (NULL);
	while (big[i] && i < len)
	{
		j = 0;
		while (big[i] && little[j] && (big[i] != little[j]) && i < len)
			i++;
		ptr = (char *)&big[i];
		while ((big[i] == little[j]) && big[i] && little[j])
		{
			i++;
			j++;
		}
		if (little[j] == '\0')
			return (ptr);
	}
	return (NULL);
}
