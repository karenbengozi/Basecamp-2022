/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hpessoa- <hpessoa-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/12 12:04:11 by hpessoa-          #+#    #+#             */
/*   Updated: 2022/02/14 02:51:55 by hpessoa-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

void	erroargumentos(int *argc);
void	ft_putchar(char c);

int	main(int argc, char *argv[])
{
	erroargumentos(&argc);
	write (1, argv[1], 0);
}
