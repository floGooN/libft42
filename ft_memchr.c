/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fberthou <fberthou@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/09 13:18:16 by fberthou          #+#    #+#             */
/*   Updated: 2023/11/14 11:19:34 by fberthou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	const unsigned char	*s1;

	s1 = (const unsigned char *)s;
	while (n > 0)
	{
		if (*s1 == c)
			return ((void *)s1);
		n--;
		s1++;
	}
	return (0);
}

/*int	main(void)
{
	char	src[] = {-49, 49, 1, -1, 0, -2, 2};
	size_t	size = 7;

	printf("%s\n", ((char *)ft_memchr(src, -1, 7)));
	return (0);
}*/
