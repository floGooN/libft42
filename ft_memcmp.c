/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fberthou <fberthou@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/09 14:35:24 by fberthou          #+#    #+#             */
/*   Updated: 2023/11/14 09:34:31 by fberthou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t				i;
	const unsigned char	*a;
	const unsigned char	*b;

	i = 0;
	a = s1;
	b = s2;
	if (n == 0)
		return (0);
	while (i < n - 1 && a[i] == b[i])
		i++;
	return (a[i] - b[i]);
}

/*int	main(int arc, char **arv)
{
	char	*s1 = arv[1];
	char	*s2 = arv[2];
	size_t	size = atoi(arv[3]);

	printf("M = %d\n", ft_memcmp(s1, s2, size));
	printf("T = %d\n", memcmp(s1, s2, size));
	return (0);
}*/
