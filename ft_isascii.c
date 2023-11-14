/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fberthou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 14:03:00 by fberthou          #+#    #+#             */
/*   Updated: 2023/11/08 11:42:50 by fberthou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isascii(int c)
{
	if (c >= 0 && c <= 127)
		return (1);
	else
		return (0);
}

/*int	main(int arc, char **arv)
{
	int	i;
	int	ch;

	i = 0;
	ch = 0x81;
	printf("M = %d\n", ft_isascii(ch));
	printf("T = %d\n", isascii(ch));
	while (arv[1][i])
	{
		printf("M = %d\n", ft_isascii(arv[1][i]));
		i++;
	}
	i = 0;
	while (arv[1][i])
	{
		printf("T = %d\n", isascii(arv[1][i]));
		i++;
	}
}*/
