/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kferreir <kferreir@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/15 23:38:05 by kferreir          #+#    #+#             */
/*   Updated: 2022/02/16 19:42:30 by kferreir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strupcase(char *str);

int	main(void)
{
	char	a[] = "BomDia!123";
	char	b[] = "BoaTarde!123";
	char	c[] = "BoaNoite!123";
	
	printf ("%s\n", a);
	printf ("%s\n", b);
	printf ("%s\n", c);
	ft_strupcase(a);
	ft_strupcase(b);
	ft_strupcase(c);
	printf ("%s\n", a);
	printf ("%s\n", b);
	printf ("%s\n", c);
	return (0);
}
