/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fberthou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 10:02:51 by fberthou          #+#    #+#             */
/*   Updated: 2023/11/13 13:31:56 by fberthou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalpha(int c)
{
	if (c >= 65 && c <= 90)
		return (c);
	else if (c >= 97 && c <= 122)
		return (c);
	else
		return (0);
}

/*int	main(void)
{
	int	i;

	i = -1;
	while (i <= 127)
	{
		if (ft_isalpha(i))
		{
			printf("[i] = %d, i = %d, %s", ft_isalpha(i), i, "true\n");
		}
		else
			printf("i = %d, %s", i, "false\n");
		i++;

	}
	return (0);
}*/
