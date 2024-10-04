/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yaoberso <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/21 13:33:43 by yaoberso          #+#    #+#             */
/*   Updated: 2024/06/26 09:44:39 by yaoberso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
int	ft_atoi(char *str)
{
	int		i;
	int		r;
	int		s;

	i = 0;
	r = 0;
	s = 1;
	while ((str[i] >= 9 && str[i] <= 13) || str[i] == ' ')
	{
		i++;
	}
	while (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
		{
			s *= -1;
		}
		i++;
	}
	while (str[i] <= '9' && str[i] >= '0')
	{
		r = r * 10 + (str[i] - '0');
		i++;
	}
	return (s * r);
}
/*
#include <stdio.h>

int main()
{
	char	str[] = "--++--1234douhdoh";
	printf("%i", ft_atoi(str));
	return(0);
}
*/
