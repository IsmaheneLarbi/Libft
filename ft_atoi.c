/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilarbi <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/13 15:19:11 by ilarbi            #+#    #+#             */
/*   Updated: 2017/01/10 18:38:20 by ilarbi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

static	int	ft_is_within_bounds(unsigned long result, const char *str, int isneg)
{
	if (isneg == 0)
		return (((result * 10 + *str - '0') <= (unsigned long)9223372036854775807) ? 1 : 0);
	else
		return (((result  * 10 + *str - '0') <= 9223372036854775807) ? 1 : 0);	
}	
/*
static	int	ft_is_negative(const char *str)
{
	return ((*str == '-') ? 1 : 0); 
}

static	int	ft_is_sign(const char *str)
{
	return ((*str == '-' || *str == '+') ? 1 : 0);
}
*/
int		ft_atoi(const char *str)
{
	int		i;
	int		isneg;
	long	result;

	i = 0;
	isneg = 0;
	result = 0;
	while (str[i] == ' ' || str[i] == '\v' || str[i] == '\t'
			|| str[i] == '\r' || str[i] == '\f' || str[i] == '\n')
		i++;
	if (str[i] == '-' || (str[i] == '+' && isneg == 0))
	{
		if (str[i] == '-')
			isneg = 1;
		i++;
	}
	/*if (ft_is_sign(&str[i]))
	{
		isneg = ft_is_negative(&str[i]);
		i++;
	}*/
	if (!ft_isdigit(str[i]))
		return (0);
	while (str[i] && ft_isdigit(str[i]) &&
			ft_is_within_bounds(result, &str[i], isneg))
		result = result * 10 + (str[i++] - '0');
	if (!ft_is_within_bounds(result, &str[i], isneg))
				return ((isneg == 1) ? 0 : -1);
	return ((!isneg) ? result : -result);
}
