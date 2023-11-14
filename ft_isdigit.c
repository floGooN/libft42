/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fberthou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 11:23:01 by fberthou          #+#    #+#             */
/*   Updated: 2023/11/08 11:43:25 by fberthou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isdigit(int c)
{
	if (c < '0' || c > '9')
		return (0);
	return (1);
}

/*
int	main(int arc, char **arv)
{
	int	i;

	i = 0;
	while (arv[1][i])
	{
		printf("ft = %d\n", ft_isdigit(arv[1][i]));
		printf("is = %d\n", isdigit(arv[1][i]));
		i++;
	}
}*/
