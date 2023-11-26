/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fberthou <fberthou@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/09 13:18:16 by fberthou          #+#    #+#             */
/*   Updated: 2023/11/24 16:54:47 by fberthou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	const unsigned char	*s1;
	size_t				i;

	s1 = (const unsigned char *)s;
	i = 0;
	while (i < n)
	{
		if (s1[i] == (unsigned char)c)
			return ((void *)&s1[i]);
		i++;
	}
	return (NULL);
}

// int	main(void)
// {
// 	char	*src = "/|\x12\xff\x09\x42\2002\42|\\";
// 	size_t	size = 10;

// 	printf("%s\n", ((char *)memchr(src, '\200', 7)));
// 	printf("%s\n", ((char *)ft_memchr(src, '\200', 7)));
// 	return (0);
// }
