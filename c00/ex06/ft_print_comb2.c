/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kferreir <kferreir@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/09 01:33:41 by kferreir          #+#    #+#             */
/*   Updated: 2022/02/13 14:10:06 by kferreir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_comb2(void)
{
	char	x;
	char	y;

	x = 0;
	y = 0;
	while (x <= 99)
	{
		y = x + 1;
		while (y <= 99)
		{
			ft_putchar(x / 10 + '0');
			ft_putchar(x % 10 + '0');
			ft_putchar(' ');
			ft_putchar(y / 10 + '0');
			ft_putchar(y % 10 + '0');
			if (x != 98)
				write(1, ", ", 2);
			y++;
		}
		x++;
	}
}

// =============================================LOGICA=============================================

// #include <stdio.h>
// #include <unistd.h>

// void	ft_print_comb2(void)
// {
// 	int	x;
// 	int	y;

// 	x = 0;
// 	while (x <= 99)
// 	{
// 		y = x + 1;
// 		while (y <= 99)
// 		{
// 			printf("%d %d", x, y);
// 			if (x != 98 && y != 99)
// 				write (1, ", ", 2);
// 			y++;
// 		}
// 		x++;
// 	}
// }
