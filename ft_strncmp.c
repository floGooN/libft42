/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fberthou <fberthou@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/08 11:59:17 by fberthou          #+#    #+#             */
/*   Updated: 2023/11/14 09:39:40 by fberthou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	if (n == 0)
		return (0);
	else if (ft_strlen(s1) == 0)
		return (-s2[0]);
	else if (ft_strlen(s2) == 0)
		return (s1[0]);
	i = 0;
	while (i < n)
	{
		if (s1[i] != s2[i])
			return (s1[i] - s2[i]);
		else if (s1[i + 1] == 0 && s2[i + 1] == 0)
			return (0);
		i++;
	}
	return (0);
}

/*int	main(int arc, char **arv)
{
	char	*s1 = arv[1];
	char	*s2 = arv[2];
	size_t	size = atoi(arv[3]);
	int	result = ft_strncmp(s1, s2, size);
	printf("M = %d\n", result);

	result = strncmp(s1, s2, size);
	printf("T = %d\n", result);
}*/
