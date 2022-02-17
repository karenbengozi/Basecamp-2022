/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_put.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hpessoa- <hpessoa-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/12 13:12:47 by hpessoa-          #+#    #+#             */
/*   Updated: 2022/02/14 02:50:51 by hpessoa-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	erroargumentos(int *argc);
void	tabela(void);
void	ft_putchar(char *vetor);

void	erroargumentos(int *argc)
{
	if (*argc != 2)
	{
		write(1, "Error", 5);
		write(1, "\n", 1);
	}
	else
	{
		tabela ();
	}
}

void	ft_putchar(char *vetor)
{
	write (1, vetor, 7);
	write(1, "\n", 1);
}
