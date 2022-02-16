/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kferreir <kferreir@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/16 13:12:06 by kferreir          #+#    #+#             */
/*   Updated: 2022/02/16 13:14:06 by kferreir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strlowcase(char *str);

int	main(void)
{
	char	a[] = "BomDia!123";

	printf ("%s\n", a);
	ft_strlowcase(a);
	printf ("%s\n", a);
	return (0);
}
