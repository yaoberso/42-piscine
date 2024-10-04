/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yaoberso <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/21 10:03:03 by yaoberso          #+#    #+#             */
/*   Updated: 2024/06/25 13:44:14 by yaoberso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
int	ft_strncmp(char	*s1, char	*s2, unsigned int n)
{
	unsigned int		i;

	i = 0;
	while (s1[i] && s2[i] && s1[i] == s2[i] && i < n)
	{
		i++;
	}
	if (i == n)
	{
		return (0);
	}
	return (s1[i] - s2[i]);
}
/*
#include <stdio.h>

int main(void)
{
	char s1[] = "";
	char s2[] = "";
	int n = 7;

	printf("%i", ft_strncmp(s1, s2, n));
	return(0);
}
*/
