/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kferreir <kferreir@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/13 20:53:53 by kferreir          #+#    #+#             */
/*   Updated: 2022/02/14 23:51:32 by kferreir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_strlen(char *str);

int	main(void)
{
	char	str[];
	int		result;

	str[] = "borboleta";
	result = ft_strlen(str);
	printf ("Tamanho: %d\n", result);
}
