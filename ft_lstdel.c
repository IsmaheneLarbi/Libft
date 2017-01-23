/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdel.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilarbi <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/31 16:36:52 by ilarbi            #+#    #+#             */
/*   Updated: 2017/01/09 15:51:13 by ilarbi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstdel(t_list **alst, void (*del)(void *, size_t))
{
	t_list	*nextelt;

	while (*alst && del)
	{
		nextelt = (*alst)->next;
		ft_lstdelone(alst, del);
		if (nextelt)
			*alst = nextelt;
	}
}
