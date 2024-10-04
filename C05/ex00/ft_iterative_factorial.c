/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yaoberso <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/25 09:38:58 by yaoberso          #+#    #+#             */
/*   Updated: 2024/06/26 10:06:17 by yaoberso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
int	ft_iterative_factorial(int nb)
{
	int		i;

	if (nb == 0)
	{
		return (1);
	}
	if (nb < 0)
	{
		return (0);
	}
	i = 1;
	while (nb > 1)
	{
		i = i * nb;
		nb--;
	}
	return (i);
}
/*
#include <stdio.h>

int main(void)
{
	int nb = 4;
	int result = ft_iterative_factorial(nb);
	printf ("%i\n", result);
}
*/
