/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pneto-vi <pneto-vi@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/16 18:28:12 by pneto-vi          #+#    #+#             */
/*   Updated: 2026/04/21 10:35:38 by pneto-vi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*h;

	if (!lst || !del)
		return ;
	while (*lst != NULL)
	{
		h = (*lst)-> next;
		ft_lstdelone(*lst, del);
		*lst = h;
	}
	*lst = NULL;
}
