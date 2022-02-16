/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kferreir <kferreir@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/15 18:26:44 by kferreir          #+#    #+#             */
/*   Updated: 2022/02/15 19:16:53 by kferreir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strcpy(char *dest, char *src);

int	main(void)
{
	char	src[] = "karen";
	char	dest[] = "";
	
	printf ("%s\n", dest);
	ft_strcpy(dest, src);
	printf ("%s\n", dest);
}
