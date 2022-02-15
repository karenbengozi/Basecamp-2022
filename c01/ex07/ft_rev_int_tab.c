/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kferreir <kferreir@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/13 20:53:56 by kferreir          #+#    #+#             */
/*   Updated: 2022/02/15 16:13:16 by kferreir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_rev_int_tab(int *tab, int size)
{
	int	count;
	int	aux;

	count = 0;
	while (++count < --size)
	{
		aux = tab[cont];
		tab[count] = tab[size];
		tab[size] = aux;
	}
}

//Não finalizado