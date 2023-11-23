/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fberthou <fberthou@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/23 12:34:26 by fberthou          #+#    #+#             */
/*   Updated: 2023/11/23 17:08:10 by fberthou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new;

	if (!lst || !(*f) || !(*del))
		return (NULL);
	while (lst)
	{
		if (!(*f)(lst->content))
		{
			(*del)(lst->content);
			(*f)(lst->content);
		}
		new = ft_lstnew(lst->content);
		if (!new)
		{
			ft_lstclear(&new, (*del));
			return (new);
		}
		ft_lstadd_back(&new, new);
		new = new->next;
		lst = lst->next;
	}
	return (new);
}
