/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilarbi <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/14 18:03:47 by ilarbi            #+#    #+#             */
/*   Updated: 2017/01/06 12:53:44 by ilarbi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t	i;
	void	*ptr;

	i = 0;
	while ((*(char *)(s + i) != c) && *((char *)(s + i)) && i < n)
		i++;
	if (*(char *)(s + i) == c)
	{
		ptr = (char *)(&s[i]);
		return (ptr);
	}
	else
		return (NULL);
}
