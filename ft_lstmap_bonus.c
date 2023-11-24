/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fberthou <fberthou@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/23 12:34:26 by fberthou          #+#    #+#             */
/*   Updated: 2023/11/24 09:24:48 by fberthou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new;
	t_list	*temp;

	if (lst && (*f))
	{
		new = ft_lstnew(f(lst->content));
		temp = new;
		while (lst->next)
		{
			lst = lst->next;
			temp->next = ft_lstnew(f(lst->content));
			if (!temp->next)
			{
				ft_lstclear(&new, del);
				return (new);
			}
			temp = temp->next;
		}
		return (new);
	}
	return (NULL);
}
