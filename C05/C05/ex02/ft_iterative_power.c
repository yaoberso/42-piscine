/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yaoberso <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/25 10:45:18 by yaoberso          #+#    #+#             */
/*   Updated: 2024/06/29 11:30:04 by yaoberso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
int	ft_iterative_power(int nb, int power)
{
	int		result;

	result = 1;
	if (power < 0)
	{
		return (0);
	}
	if (power == 0)
	{
		return (1);
	}
	while (power >= 1)
	{
		result = result * nb;
		power--;
	}
	return (result);
}
/*
#include <stdio.h>

int main(void)
{
	int nb = 5;
	int power = 3;
	int result = ft_iterative_power(nb, power);
	printf ("%i\n", result);
}
*/
