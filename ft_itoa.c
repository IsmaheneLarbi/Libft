/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilarbi <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/06 13:17:56 by ilarbi            #+#    #+#             */
/*   Updated: 2017/01/06 17:51:44 by ilarbi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include "libft.h"

static	size_t	ft_numberlength(int nbr)
{
	size_t	len;
	
	len = 0;
	if (nbr == 0)
		return (1);
	while (nbr > 0)
	{
		len++;
		nbr = nbr / 10;
	}
	return (len);
}

char	*ft_itoa(int nbr)
{
//	long		nbr;
	long		rest;
	size_t		len;
	size_t		isneg;
	char		*number;

	//nbr = (long)n;
	printf("nbr = %d\n", nbr);
	len = 0;
	if (nbr < 0)
	{
		len++;
		nbr = (-1) * nbr;
		isneg = 1;
	}
	rest = nbr % 10;
	len += ft_numberlength(nbr);
	number = (char *)malloc(sizeof(char) * (len + 1));
	if (number)
	{
		if (isneg && nbr != 0)
			number[0] = '-';
		number[len--] = '\0';
		if (nbr == 0)
			number[len] = 0 + 48;
		while (nbr > 0) 
		{
			rest = nbr % 10;
			nbr = nbr / 10;
			number[len--] = rest + 48;
		}
	}
	return (number);
}

int		main(void)
{
	printf("ft_itoa(-623) = %s\n", ft_itoa(-623));
	printf("ft_itoa(-1234) = %s\n", ft_itoa(-1234));
	printf("ft_itoa(-2147483647 -1) = %s\n", ft_itoa(-2147483647 -1));
	return (0);
}
