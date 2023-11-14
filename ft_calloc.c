/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fberthou <fberthou@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/14 13:13:18 by fberthou          #+#    #+#             */
/*   Updated: 2023/11/14 17:40:24 by fberthou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*dst;

	if (nmemb == 0 || size == 0)
		return (0);
	dst = malloc(nmemb * size);
	if (dst == NULL)
		return (0);
	ft_memset(dst, 0, (nmemb * size));
	return (dst);
}

/*int	main(void)
{
	char	*cptr;
	int	*iptr;
	size_t	size = 0;

	cptr = (char *)ft_calloc(0, 0);
	iptr = (int *)ft_calloc(size, sizeof(int));
	printf("%p\n", cptr);
	printf("%p\n", iptr);
	free(cptr);
	free(iptr);
	return (0);
}*/
