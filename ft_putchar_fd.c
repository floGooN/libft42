/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fberthou <fberthou@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/17 10:05:08 by fberthou          #+#    #+#             */
/*   Updated: 2023/11/17 10:18:22 by fberthou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putchar_fd(char c, int fd)
{
	if (fd)
		write(fd, &c, 1);
}

/*int	main(int arc, char **arv)
{
	ft_putchar_fd(arv[1][0], 1);
	return (0);
}*/
