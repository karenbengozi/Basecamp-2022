/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kferreir <kferreir@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/16 13:17:17 by kferreir          #+#    #+#             */
/*   Updated: 2022/02/16 13:20:43 by kferreir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strcapitalize(char *str);

int	main(void)
{
	char	a[] = "oi, tudo bem? 42palavras quarenta-e-duas; cinquenta+e+um";

	printf ("%s\n", a);
	ft_strcapitalize(a);
	printf ("%s\n", a);
	return (0);
}
