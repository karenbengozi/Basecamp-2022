/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kferreir <kferreir@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/17 11:01:37 by kferreir          #+#    #+#             */
/*   Updated: 2022/02/17 12:05:25 by kferreir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

int	ft_strcmp(char *s1, char *s2);

int	main(void)
{
	char	a[] = "bom dia";
	char	b[] = "bom dia ";
	int	m;
	int	f;
	
	m = ft_strcmp(a, b);
	printf("Minha função: %d\n", m);
	f = strcmp(a, b);
	printf("Função original: %d\n", f);
}
