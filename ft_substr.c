/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fberthou <fberthou@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/15 09:44:51 by fberthou          #+#    #+#             */
/*   Updated: 2023/11/15 15:16:34 by fberthou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	int		i;
	int		x;
	char	*dst;

	if (start >= ft_strlen(s))
		len = 0;
	else if (len > ft_strlen(s))
		len = ft_strlen(s);
	dst = malloc((len + 1) * sizeof(char));
	x = 0;
	i = start;
	if (!dst)
		return (NULL);
	while (x < (int)len && s[i])
	{
		dst[x] = s[i];
		x++;
		i++;
	}
	dst[x] = 0;
	return (dst);
}

/*int	main(void)
{
	char	*dst;
	char	*src = "";
	
	dst = ft_substr("hola", 0, 21474836475);
	printf("%s\n", dst);
	return (0);
}*/
