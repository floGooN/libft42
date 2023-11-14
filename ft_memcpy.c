/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fberthou <fberthou@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/09 09:22:45 by fberthou          #+#    #+#             */
/*   Updated: 2023/11/09 10:37:56 by fberthou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n)
	{
		((char *)dest)[i] = ((char *)src)[i];
		i++;
	}
	return (dest);
}

/*int	main(void)
{
	char	cpy[] = "000000000000000000";
	char	array[] = "make a copy of that";
	printf("%s\n", cpy);
	ft_memcpy(cpy, array, 19 * sizeof(*array));
	printf("%s", cpy);
	return (0);
}*/
