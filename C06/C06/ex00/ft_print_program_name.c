/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_program_name.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yaoberso <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/26 10:37:39 by yaoberso          #+#    #+#             */
/*   Updated: 2024/06/26 13:32:35 by yaoberso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

int	main(int argc, char	*argv[])
{
	int	j;

	argc = 0;
	j = 0;
	while (argv[0][j] != '\0')
	{
		write(1, &argv[0][j], 1);
		j++;
	}
	write(1, "\n", 1);
	return (0);
}
