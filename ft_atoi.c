/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilarbi <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/13 15:19:11 by ilarbi            #+#    #+#             */
/*   Updated: 2016/12/30 19:56:03 by ilarbi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include "libft.h"

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
	if (str[i] == '-')
	{
		isneg = 1;
		i++;
	}
	if (str[i] == '+' && isneg == 0)
		i++;
	while ((result <= 2147483648) && str[i] >= '0' && str[i] <= '9')
		result = result * 10 + (str[i++] - '0');
	if ((str[i] == '+' && isneg == 1) || (result > 2147483648 && isneg == 1))
		return (0);
	if (result > 2147483647 && isneg == 0)
		return (-1);
	return ((!str[i] && !isneg) ? result : -result);
}
