/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yaoberso <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/19 09:43:31 by yaoberso          #+#    #+#             */
/*   Updated: 2024/06/19 15:13:50 by yaoberso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_putchar(char a, char b, char c, char d)
{
	write(1, &a, 1);
	write(1, &b, 1);
	write(1, " ", 1);
	write(1, &c, 1);
	write(1, &d, 1);
	if (!(a == '9' && b == '8' && c == '9' && d == '9'))
		write(1, ", ", 2);
}

void	ft_print_pairs(char a, char b)
{
	char	c;
	char	d;

	c = a;
	d = b + 1;
	while (c <= '9')
	{
		while (d <= '9')
		{
			ft_putchar(a, b, c, d);
			d++;
		}
		c++;
		d = '0';
	}
}

void	ft_print_comb2(void)
{
	char	a;
	char	b;

	a = '0';
	while (a <= '9')
	{
		b = '0';
		while (b <= '9')
		{
			ft_print_pairs(a, b);
			b++;
		}
		a++;
	}
}
int main(void)
{
	ft_print_comb2();
	return(0);
}
