/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fberthou <fberthou@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/15 09:44:51 by fberthou          #+#    #+#             */
/*   Updated: 2023/11/20 13:59:34 by fberthou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	lenstr(char const *s, unsigned int start)
{
	size_t	count;

	count = 0;
	if (start <= ft_strlen(s))
	{
		while (s[start])
		{
			count++;
			start++;
		}
	}
	return (count);
}

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	int		i;
	size_t	total_len;
	char	*dst;

	total_len = lenstr(s, start);
	if (len > total_len)
		len = total_len;
	dst = malloc((len + 1) * sizeof(char));
	if (!dst)
		return (NULL);
	ft_bzero(dst, len + 1);
	i = 0;
	while (i < (int)len && s[start])
	{
		dst[i] = s[start];
		i++;
		start++;
	}
	return (dst);
}

/*int	main(int arc, char **arv)
{
	char	*dst;
	
	dst = ft_substr(arv[1], atoi(arv[2]), atoi(arv[3]));
	printf("%s\n", dst);
	return (0);
}*/
