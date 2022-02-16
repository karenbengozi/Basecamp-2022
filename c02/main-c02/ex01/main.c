/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kferreir <kferreir@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/15 19:17:59 by kferreir          #+#    #+#             */
/*   Updated: 2022/02/15 20:09:06 by kferreir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strncpy(char *dest, char *src, unsigned int n);

int	main(void)
{
	char	src[] = "bola";
	char	dest[100] = "";
	unsigned int	n = 2;
	
	// printf ("%s\n", src);
	ft_strncpy(dest, src, n);
	printf ("%s\n", dest);
}
