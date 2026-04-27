/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pneto-vi <pneto-vi@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/16 18:29:50 by pneto-vi          #+#    #+#             */
/*   Updated: 2026/04/16 18:46:18 by pneto-vi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	void	*content_new;
	t_list	*new_node;
	t_list	*new2;

	if (!lst || !f || !del)
		return (NULL);
	new2 = NULL;
	while (lst != NULL)
	{
		content_new = f(lst->content);
		new_node = ft_lstnew(content_new);
		if (!new_node)
		{
			del(content_new);
			ft_lstclear(&new2, del);
			return (NULL);
		}
		ft_lstadd_back(&new2, new_node);
		lst = lst->next;
	}
	return (new2);
}
