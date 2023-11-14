/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fberthou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/08 09:01:22 by fberthou          #+#    #+#             */
/*   Updated: 2023/11/08 11:47:25 by fberthou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_toupper(int c)
{
	if (c >= 97 && c <= 122)
		return (c -= 32);
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
		arv[1][i] = ft_toupper(arv[1][i]);
		i++;
	}
	printf("%s", arv[1]);
	return (0);
}*/
