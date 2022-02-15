/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kferreir <kferreir@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/13 20:07:28 by kferreir          #+#    #+#             */
/*   Updated: 2022/02/14 23:49:48 by kferreir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_ultimate_div_mod(int *a, int *b);

int	main(void)
{
	int	a;
	int	b;

	a = 11;
	b = 2;
	ft_ultimate_div_mod(&a, &b);
	printf("%d %d", a, b);
}
