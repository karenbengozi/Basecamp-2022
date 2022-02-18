/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kferreir <kferreir@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/17 12:08:17 by kferreir          #+#    #+#             */
/*   Updated: 2022/02/18 11:42:33 by kferreir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

int	ft_strncmp(char *s1, char *s2, unsigned int n);

int	main(void)
{
	char	*str1 = "aa";
	char	*str2 = "ab";
	unsigned int	n;

	n = 1;
	printf("Minha função: %d\n", ft_strncmp(str1, str2, n));
	printf("Função original: %d\n", strncmp(str1, str2, n));
}
