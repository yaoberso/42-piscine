/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yaoberso <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/20 15:12:57 by yaoberso          #+#    #+#             */
/*   Updated: 2024/06/27 10:59:21 by yaoberso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
char *ft_rev(char *str)
{
	int i;
	char st;
	int size;

	i = 0;
	while (str[i] != 0)
	{
		i++;
	}
	size = i - 1;
	i = 0;
	while (i < size)
	{
		st = str[i];
		str[i] = str[size];
		str[size] = st;
		i++;
		size--;
	}
	return (str);
}

#include <stdio.h>

int	main()
{
	char tab[] = "faire2foislapiscinecbeaucoup";
	printf("%s", ft_rev(tab));
	
	return (0);
}
