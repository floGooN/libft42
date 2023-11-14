/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fberthou <fberthou@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/09 10:39:35 by fberthou          #+#    #+#             */
/*   Updated: 2023/11/14 11:54:27 by fberthou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	int	i;

	if (src == 0 || dest == 0)
		return (0);
	if (src < dest)
	{
		i = n - 1;
		while (i >= 0)
		{
			((char *)dest)[i] = ((char *)src)[i];
			i--;
		}
	}
	else
	{
		i = 0;
		while (i < (int) n)
		{
			((char *)dest)[i] = ((char *)src)[i];
			i++;
		}
	}
	return (dest);
}

/*int	main(void)
{
	char	src[] = "this is the string source";
	char	dst[strlen(src) * sizeof(char *)];

	printf("%s\n", dst);
	printf("%zu\n", 18 * sizeof(char *));
	memmove(dst, src, 18 * sizeof(char *));
	printf("%s\n", dst);
	printf("%p\n", ft_memmove(((void*)0), ((void*)0), 5));
}*/
