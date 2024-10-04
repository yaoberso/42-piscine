/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yaoberso <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/26 12:33:36 by yaoberso          #+#    #+#             */
/*   Updated: 2024/06/26 12:46:44 by yaoberso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

int main (int argc, char *argv[])
{
	int asc;
	int	i;
	int	j;
	
	i = 1;
	while (argc > i)
	{
		asc = 32;
		while(asc < 127)
		{
			if (asc == argv[i][j])
			{
				while (argv[i][j] != '\0')
				{
					write(1, &argv[i][j], 1);
					j++;
				}
				write(1, "\n", 1);
			}
			asc++;
		}
		i++;
	}
	return (0);
}
