/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kferreir <kferreir@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/13 20:53:59 by kferreir          #+#    #+#             */
/*   Updated: 2022/02/13 21:26:12 by kferreir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_rev_int_tab(int *tab, int size);

int	main(void)
{
	int	tab[5] = {1,2,3,4,5}
	int	size;
	int	cont;
	
	cont = 0;

	printf("%p %d  ----> ", tab, size);

	ft_rev_int_tab(*tab, size);

	printf("%d %d\n", tab, size);
}
