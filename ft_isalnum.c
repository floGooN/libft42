/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fberthou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 13:42:58 by fberthou          #+#    #+#             */
/*   Updated: 2023/11/08 11:41:56 by fberthou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isalnum(int c)
{
	if (c >= 48 && c <= 57)
		return (1);
	else if (c >= 65 && c <= 90)
		return (1);
	else if (c >= 97 && c <= 122)
		return (1);
	else
		return (0);
}

/*
int	main(int arc, char **arv)
{
	int	i;

	i = 0;
	while (arv[1][i])
	{
		printf("M = %d\n", ft_isalnum(arv[1][i]));
		i++;
	}

	i = 0;
	while (arv[1][i])
	{
		printf("T = %d\n", isalnum(arv[1][i]));
		i++;
	}
}*/
