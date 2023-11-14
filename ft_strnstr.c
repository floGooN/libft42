/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fberthou <fberthou@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/08 12:20:54 by fberthou          #+#    #+#             */
/*   Updated: 2023/11/13 11:26:53 by fberthou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	x;

	i = 0;
	x = 0;
	if (ft_strlen(little) == 0)
		return ((char *) big);
	while (i < len && big[i] != '\0')
	{
		while (big[i] == little[x] && i < len)
		{
			if (little[x + 1] == '\0')
				return ((char *) &big[i - (x)]);
			x++;
			i++;
		}
		if (x > 0)
		{
			i = i - x;
			x = 0;
		}
		i++;
	}
	return (0);
}

/*int	main(int arc, char **arv)
{
	printf("%s\n", ft_strnstr(arv[1], arv[2], (size_t) 50));
	printf("%s", strnstr(arv[1], arv[2], (size_t) 50));
	return (0);
}*/
