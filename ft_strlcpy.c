/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fberthou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 16:56:02 by fberthou          #+#    #+#             */
/*   Updated: 2023/11/13 15:28:09 by fberthou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	i;

	i = 0;
	if (size == 0)
		return (ft_strlen(src));
	while (i < size - 1 && src[i] != '\0')
	{
		dst[i] = src[i];
		i++;
	}
	if (size > 0)
		dst[i] = '\0';
	while (src[i] != '\0')
		i++;
	return (i);
}

/*int	main(int arc, char **arv)
{
	char	dest[10];
	char	*src;
	size_t	size;

	size = sizeof(dest);
	src = arv[1];
	printf("M = %zu\n", ft_strlcpy(dest, src, size));
	printf("M = %s\n", dest);
	printf("T = %zu\n", strlcpy(dest, src, size));
	printf("T = %s\n", dest);
	return (0);
}*/
