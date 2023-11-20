/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fberthou <fberthou@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/17 11:27:18 by fberthou          #+#    #+#             */
/*   Updated: 2023/11/17 13:41:11 by fberthou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int	i;
	char			*dst;

	i = 0;
	dst = malloc(ft_strlen(s) + 1 * sizeof(char));
	if (!dst || !s)
		return (NULL);
	while (s[i])
	{
		dst[i] = (*f)(i, s[i]);
		i++;
	}
	dst[i] = 0;
	return (dst);
}

/*char	function(unsigned int i, char c)
{
	if (i % 2 != 0)
		c = 'u';
	return (c);
}

int	main(void)
{
	printf("%s", ft_strmapi("lolo", &function));
	return (0);
}*/
