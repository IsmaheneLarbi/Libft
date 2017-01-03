/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilarbi <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/30 20:20:10 by ilarbi            #+#    #+#             */
/*   Updated: 2016/12/31 18:42:10 by ilarbi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

void	ft_lstdelone(t_list	**alst, void (*del)(void const *, size_t))
{
	if (*alst && del)
		{
			del((*alst)->content, (*alst)->content_size);
		if (*alst)
			free(*alst);
		*alst = NULL;
	}	
}
