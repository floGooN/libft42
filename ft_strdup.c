/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fberthou <fberthou@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/15 09:03:26 by fberthou          #+#    #+#             */
/*   Updated: 2023/11/15 09:42:06 by fberthou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	int		i;
	char	*dst;

	dst = malloc((ft_strlen(s) + 1) * sizeof(char));
	if (!dst)
		return (0);
	i = 0;
	while (s[i])
	{
		dst[i] = s[i];
		i++;
	}
	dst[i] = 0;
	return (dst);
}

/*int	main(int arc, char **arv)
{
	char	*s = arv[1];
	char	*dst = ft_strdup(s);
	char	*dst2 = strdup(s);
	printf("DST = %s\n", dst);
	printf("DST2 = %s\n", dst2);
	free(dst);
	free(dst2);
	return (0);
}*/
