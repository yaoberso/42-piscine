/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yaoberso <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/01 14:40:59 by yaoberso          #+#    #+#             */
/*   Updated: 2024/07/07 12:36:55 by yaoberso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int		*tab;
	int		i;

	if (min >= max)
	{
		return (NULL);
	}
	tab = (int *)malloc((max - min + 1) * sizeof(int));
	if (tab == NULL)
	{
		return (NULL);
	}
	i = 0;
	while (min < max)
	{
		tab[i] = min;
		min++;
		i++;
	}
	return (tab);
}
