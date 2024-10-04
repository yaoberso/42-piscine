/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yaoberso <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/25 10:10:07 by yaoberso          #+#    #+#             */
/*   Updated: 2024/06/25 13:38:16 by yaoberso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
int	ft_recursive_factorial(int nb)
{
	int		resultat;

	if (nb == 0)
	{
		return (1);
	}
	else if (nb < 0)
	{
		return (0);
	}
	resultat = nb * ft_recursive_factorial(nb - 1);
	return (resultat);
}
/*
#include <stdio.h>

int main(void)
{
	int nb = 4;
	int result = ft_recursive_factorial(nb);
	printf ("%i\n", result);
}
*/
