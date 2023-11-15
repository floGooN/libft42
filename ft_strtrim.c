/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fberthou <fberthou@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/15 14:06:47 by fberthou          #+#    #+#             */
/*   Updated: 2023/11/15 17:51:39 by fberthou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	*ft_copy(char const *s1, char *dst, int left_index, int n)
{
	int		i;

	i = 0;
	while (s1[left_index] && left_index < n + 1)
	{
		dst[i] = s1[left_index];
		i++;
		left_index++;
	}
	dst[i] = 0;
	return (dst);
}

static int	trim_left(char const *s1, char const *set)
{
	int		i;
	int		j;

	i = 0;
	j = 0;
	while (s1[i] && set[j])
	{
		if (s1[i] == set[j])
			i++;
		else if (s1[i] != set[j])
		{
			j = 0;
			while (set[j] != s1[i] && set[j])
				j++;
		}
	}
	return (i);
}

static int	trim_right(char const *s1, char const *set)
{
	int	i;
	int	j;

	j = 0;
	i = ft_strlen(s1) - 1;
	while (i > 0 && set[j])
	{
		if (s1[i] == set[j])
			i--;
		else if (s1[i] != set[j])
		{
			j = 0;
			while (set[j] != s1[i] && set[j])
				j++;
		}
	}
	return (i);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	int		size;
	int		left_index;
	int		right_index;
	char	*dst;

	left_index = trim_left(s1, set);
	right_index = trim_right(s1, set);
	size = right_index - left_index + 2;
	if (size <= 1)
	{
		dst = malloc(1 * sizeof(char));
		dst[0] = 0;
		return (dst);
	}
	else
		dst = malloc(size * sizeof(char));
	if (!dst)
		return (NULL);
	dst = ft_copy(s1, dst, left_index, right_index);
	return (dst);
}

/*int	main(int arc, char **arv)
{
	char	*s1 = arv[1];
	char	*s2 = arv[2];
	char	*dst;

	dst = ft_strtrim(arv[1], arv[2]);
	printf("%s", dst);
	free(dst);
	return (0);
}*/
