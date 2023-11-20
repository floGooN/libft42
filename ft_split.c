/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fberthou <fberthou@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/16 08:17:55 by fberthou          #+#    #+#             */
/*   Updated: 2023/11/20 15:43:59 by fberthou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	count_separator(const char *s, char c)
{
	int		i;
	size_t	count;

	i = 0;
	count = 0;
	while (s[i])
	{
		if (s[i] == c && s[i + 1] == 0)
			break ;
		else if (s[i] == c && s[i + 1] != c)
			count++;
		i++;
	}
	if (s[0] != c)
		count += 1;
	return (count);
}

static size_t	ft_lenstr(const char *s, char c, int start)
{
	size_t	count;

	count = 0;
	while (s[start] != c && s[start])
	{
		count++;
		start++;
	}
	return (count);
}

static void	ft_free_array(char **array, size_t index)
{
	while (index > 0)
	{
		free(array[index]);
		index--;
	}
	free(array[0]);
	free(array);
}

char	**ft_split(char const *s, char c)
{
	int		i;
	size_t	tab_size;
	size_t	x;
	char	**dst;

	tab_size = count_separator(s, c);
	dst = malloc(tab_size * sizeof(char *));
	if (!dst)
		return (NULL);
	ft_bzero(dst, tab_size);
	x = 0;
	i = 0;
	while (s[i] && x < tab_size && s[0] != '\0')
	{
		if (s[i] != c)
		{
			dst[x] = ft_substr(s, (unsigned int) i, ft_lenstr(s, c, i));
			if (!dst[x])
				ft_free_array(dst, (x - 1));
			i = i + ft_lenstr(s, c, i);
			x++;
		}
		i++;
	}
	return (dst);
}

/*int	main(int arc, char **arv)
{
	int	x;
	size_t	x_size;
	char	**dst;

	x_size = count_separator(arv[1], arv[2][0]);
	dst = ft_split(arv[1], arv[2][0]);
	x = 0;
	while (x < x_size)
	{
		printf("x = %x : %s\n", x, dst[x]);
		x++;
	}
	x = 0;
	while (x < x_size)
	{
		free(dst[x]);
		x++;
	}
	free(dst);
	return (0);
}*/
