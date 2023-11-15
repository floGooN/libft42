/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fberthou <fberthou@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/15 13:31:54 by fberthou          #+#    #+#             */
/*   Updated: 2023/11/15 14:04:27 by fberthou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	int		i;
	int		j;
	int		total_len;
	char	*dst;

	total_len = ft_strlen(s1) + ft_strlen(s2) + 1;
	dst = malloc(total_len * sizeof(char));
	if (!dst)
		return (NULL);
	i = 0;
	while (s1[i])
	{
		dst[i] = s1[i];
		i++;
	}
	j = 0;
	while (s2[j])
	{
		dst[i] = s2[j];
		i++;
		j++;
	}
	dst[i] = 0;
	return (dst);
}

/*int	main(int arc, char **arv)
{
	char	*s1 = arv[1];
	char	*s2 = arv[2];
	char	*dst;

	dst = ft_strjoin(s1, s2);
	printf("%s\n", dst);
}*/
