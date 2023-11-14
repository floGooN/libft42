/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fberthou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/08 09:34:47 by fberthou          #+#    #+#             */
/*   Updated: 2023/11/13 14:21:44 by fberthou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	int	i;

	i = 0;
	if (c == 0)
		return ((char *) &s[(int) ft_strlen(s)]);
	while (s[i])
	{
		if (s[i] == c)
			return ((char *) &s[i]);
		i++;
	}
	return (0);
}

/*int	main(int arc, char **arv)
{
	char	*str;
	char	*str2;

      	str = ft_strchr(arv[1], '\0');
      	str2 = strchr(arv[1], '\0');
	printf("my str = %s\n", str);
	printf("other  = %s\n", str2);

	return (0);
}*/
