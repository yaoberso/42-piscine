/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yaoberso <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/21 09:48:54 by yaoberso          #+#    #+#             */
/*   Updated: 2024/06/24 15:27:44 by yaoberso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
int	ft_strcmp(char	*s1, char	*s2)
{
	int		i;

	i = 0;
	while (s1[i] != '\0' && s2[i] != '\0' && s1[i] == s2[i])
	{
		i++;
	}
	return (s1[i] - s2[i]);
}
/*
#include <stdio.h>

int main(void)
{
	char s1[] = "";
	char s2[] = "";

	printf("%i", ft_strcmp(s1, s2));
	return(0);
}
*/
