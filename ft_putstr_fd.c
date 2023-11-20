/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fberthou <fberthou@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/17 10:19:42 by fberthou          #+#    #+#             */
/*   Updated: 2023/11/17 10:32:10 by fberthou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putstr_fd(char *s, int fd)
{
	size_t	count;

	count = ft_strlen(s);
	if (fd)
		write(fd, s, count);
}

/*int	main(int arc, char **arv)
{
	ft_putstr_fd(arv[1], 1);
	return (0);
}*/
