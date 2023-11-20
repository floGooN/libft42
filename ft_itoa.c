/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fberthou <fberthou@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/17 13:50:04 by fberthou          #+#    #+#             */
/*   Updated: 2023/11/20 13:40:28 by fberthou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include "libft.h"

static size_t	count_size(int n)
{
	size_t	count;

	count = 0;
	if (n == -2147483648)
	{
		printf("%s\n", "ici");
		count = 11;
		return (count);
	}
	else if (n < 0)
	{
		count++;
		n *= -1;
	}
	if (n < 9)
		return (count + 1);
	while (n > 9)
	{
		n = n / 10;
		count++;
	}
	return (count + 1);
}

char	*ft_itoa(int n)
{
	int		i;
	int		temp;
	size_t	count;
	char	*dst;

	count = count_size(n);
	printf("%zu\n", count);
	dst = malloc(count + 1 * sizeof(char));
	if (!dst)
		return (NULL);
	if (n == -2147483648)
	{
		dst = "-2147483648";
		return (dst);
	}
	if (n < 0)
	{
		dst[0] = '-';
		count -= 1;
	}
	i = (int) count;
	while (i >= 0 && n > 9)
	{
		dst[i] = (n % 10) + 48;
		n /= 10;
		i--;
	}
	printf("i = %d\n", n);
	dst[i] = n + 48;
	dst[count] = 0;
	return (dst);
}

int	main(int arc, char **arv)
{
	char	*dst;
	int	i;

	dst = ft_itoa(atoi(arv[1]));
	i = 0;
	while (dst[i])
	{
		printf("%c\n", dst[i]);
		i++;
	}
	free(dst);
	return (0);
}*/
