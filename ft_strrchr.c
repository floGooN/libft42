/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fberthou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/08 10:15:37 by fberthou          #+#    #+#             */
/*   Updated: 2023/11/13 11:27:21 by fberthou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int	i;

	i = 0;
	i = (int)ft_strlen(s);
	while (i >= 0)
	{
		if (s[i] == c)
			return ((char *) &s[i]);
		else
			i--;
	}
	return (0);
}

/*
int	main(int arc, char **arv)
{
	char	*str;

       	str = ft_strrchr(arv[1], 114);
	printf("%s\n", str);

       	str = strrchr(arv[1], 114);
	printf("%s\n", str);
	return (0);
}*/
