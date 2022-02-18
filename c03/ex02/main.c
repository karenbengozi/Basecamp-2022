/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kferreir <kferreir@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/17 19:08:10 by kferreir          #+#    #+#             */
/*   Updated: 2022/02/17 21:24:47 by kferreir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>

char	*ft_strcat(char *dest, char *src);

int	main(void)
{
	char	str1[30] = "batata";
	char	str2[] = "frita";

	char	str3[30] = "batata";
	char	str4[] = "cenora";

	printf("Minha função: %s\n", ft_strcat(str1, str2));
	printf("Função original: %s\n", strcat(str1, str4));
}
