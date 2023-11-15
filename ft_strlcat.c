/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fberthou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 17:07:41 by fberthou          #+#    #+#             */
/*   Updated: 2023/11/15 10:37:49 by fberthou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	x;
	size_t	dst_len;
	size_t	src_len;

	dst_len = ft_strlen(dst);
	src_len = ft_strlen(src);
	if (size == 0)
		return (src_len);
	x = 0;
	i = dst_len;
	while (i < size - 1 && src[x] != 0)
	{
		dst[i] = src[x];
		i++;
		x++;
	}
	dst[i] = '\0';
	if (size < dst_len)
		return (src_len + size);
	else
		return (dst_len + src_len);
}

/*int	main(void)
{
	char		ft_strldest[20] = "HELLO";
	char		strlcatdest[20] = "HELLO";
	const char	src[] = " world";

	printf("M = %zu\n", ft_strlcat(ft_strldest, src, sizeof(ft_strldest)));
	printf("T = %zu\n", strlcat(strlcatdest, src, sizeof(strlcatdest)));
	printf("M = %s\n", ft_strldest);
	printf("T = %s\n", strlcatdest);
	
	return (0);
}*/
