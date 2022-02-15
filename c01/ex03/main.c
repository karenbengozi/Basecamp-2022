/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kferreir <kferreir@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/13 19:52:19 by kferreir          #+#    #+#             */
/*   Updated: 2022/02/14 23:45:41 by kferreir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_div_mod(int a, int b, int *div, int *mod);

int	main(void)
{
	int	a;
	int	b;
	int	div;
	int	mod;

	a = 26;
	b = 5;
	ft_div_mod(a, b, &div, &mod);
	printf("%d / %d = %d \nsobra = %d\n", a, b, div, mod);
}
