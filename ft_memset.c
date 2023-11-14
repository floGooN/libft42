/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fberthou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 15:08:10 by fberthou          #+#    #+#             */
/*   Updated: 2023/11/09 08:53:05 by fberthou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n)
	{
		((char *)s)[i] = (unsigned char) c;
		i++;
	}
	return (s);
}

/*int	main (int arc, char **arv)
{
	char	buffer[21];
	char	*str;

	ft_memset(buffer, 0, sizeof(buffer));
	str = (char*) ft_memset(buffer, 'Q', 10);
	printf("%s\n", buffer);
	ft_memset(buffer+10, 'P', 10);
	printf("%s", buffer);
    	return 0;
}*/
