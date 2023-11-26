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
  if (!src || !dest)
    return (dest);
  if (dest)
  {
    while (i < n)
    {
      ((char *)dest)[i] = ((const char *)src)[i];
      i++;
    }
    return (dest);
  }
  return (NULL);
}

// int	main(int arc, char **arv)
// {
//   char  dst[10];
//   printf("sizeof dst in main = %zu\n", sizeof(dst));
//   (char *)(ft_memcpy(dst, "coucou", 10));
// 	printf("%s", dst);
// 	// printf("la  : %p", (memcpy(((void *)0), ((void *)0), 3)));
// 	return (0);
// }
