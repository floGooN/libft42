/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fberthou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/08 09:27:07 by fberthou          #+#    #+#             */
/*   Updated: 2023/11/08 11:47:04 by fberthou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_tolower(int c)
{
	if (c >= 65 && c <= 90)
		return (c += 32);
	else
		return (c);
}

/*
int	main(int arc, char **arv)
{
	int	i;

	i = 0;
	while (arv[1][i])
	{
		arv[1][i] = ft_tolower(arv[1][i]);
		i++;
	}
	printf("%s", arv[1]);
	return (0);
}*/
