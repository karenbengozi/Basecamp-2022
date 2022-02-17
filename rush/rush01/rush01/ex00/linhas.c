/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   linhas.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hpessoa- <hpessoa-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/12 20:14:11 by hpessoa-          #+#    #+#             */
/*   Updated: 2022/02/14 02:53:53 by hpessoa-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char *vetor);
void	primeira(void);
void	segunda(void);
void	terceira(void);
void	quarta(void);

void	primeira(void)
{
	char	linha1[7];

	linha1[0] = '1';
	linha1[1] = ' ';
	linha1[2] = '2';
	linha1[3] = ' ';
	linha1[4] = '3';
	linha1[5] = ' ';
	linha1[6] = '4';
	ft_putchar(linha1);
}

void	segunda(void)
{
	char	linha2[7];

	linha2[0] = '2';
	linha2[1] = ' ';
	linha2[2] = '3';
	linha2[3] = ' ';
	linha2[4] = '4';
	linha2[5] = ' ';
	linha2[6] = '1';
	ft_putchar(linha2);
}

void	terceira(void)
{
	char	linha3[7];

	linha3[0] = '3';
	linha3[1] = ' ';
	linha3[2] = '4';
	linha3[3] = ' ';
	linha3[4] = '1';
	linha3[5] = ' ';
	linha3[6] = '2';
	ft_putchar(linha3);
}

void	quarta(void)
{
	char	linha4[7];

	linha4[0] = '4';
	linha4[1] = ' ';
	linha4[2] = '1';
	linha4[3] = ' ';
	linha4[4] = '2';
	linha4[5] = ' ';
	linha4[6] = '3';
	ft_putchar(linha4);
}
