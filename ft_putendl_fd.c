/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fberthou <fberthou@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/17 10:33:21 by fberthou          #+#    #+#             */
/*   Updated: 2023/11/17 10:40:18 by fberthou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putendl_fd(char *s, int fd)
{
	size_t	count;
	char	c;

	count = ft_strlen(s);
	c = '\n';
	if (fd)
	{
		write(fd, s, count);
		write(fd, &c, 1);
	}
}

/*int	main(int arc, char **arv)
{
	ft_putendl_fd(arv[1], 1);
	return (0);
}*/
