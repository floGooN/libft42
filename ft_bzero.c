/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fberthou <fberthou@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/09 08:54:41 by fberthou          #+#    #+#             */
/*   Updated: 2023/11/09 09:22:10 by fberthou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n)
	{
		((char *)s)[i] = '\0';
		i++;
	}
}

/*int	main(void)
{
	char	*buffer = "je suis une stringg";

	printf("%s\n", buffer);
	ft_bzero(&buffer, (10 * sizeof(char)));
	printf("%s\n", buffer);
	return (0);
}*/
