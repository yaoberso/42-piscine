/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yaoberso <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/25 14:22:04 by yaoberso          #+#    #+#             */
/*   Updated: 2024/06/25 14:35:05 by yaoberso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
int	ft_sqrt(int nb)
{
	int		i;

	i = 1;
	if (nb == 0)
	{
		return (0);
	}
	while (i * i < nb)
	{
		i++;
	}
	if (i * i == nb)
	{
		return (i);
	}
	else
	{
		return (0);
	}
}
/*
#include <stdio.h>

int main()
{
	int nb = 25;
	printf("%i\n", ft_sqrt(nb));
	return (0);
}
*/
