/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fberthou <fberthou@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/22 10:07:59 by fberthou          #+#    #+#             */
/*   Updated: 2023/11/23 12:11:30 by fberthou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*temp;
	t_list	*temp2;

	if (!*lst || !lst)
		return ;
	temp = *lst;
	while (*lst)
	{
		(*del)((*lst)->content);
		temp2 = (*lst)->next;
		free(*lst);
		*lst = temp2;
	}
	*lst = temp;
	*lst = NULL;
}
