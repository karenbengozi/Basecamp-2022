/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kferreir <kferreir@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/06 13:11:18 by faaugust          #+#    #+#             */
/*   Updated: 2022/02/15 17:49:54 by kferreir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	func_while(int x, int y);

void	rush(int x, int y)
{
	if (x <= 0 || y <= 0)
		return ;
	x--;
	y--;
	func_while(x, y);
}

void	func_while(int x, int y)
{
	int	c;
	int	l;

	l = y;
	c = 0;
	while (c <= y)
	{
		l = 0;
		while (l <= x)
		{
			if ((c == 0 && l == 0) || (c == y && l == x && c != 0 && l != 0))
				ft_putchar('/');
			else if ((c == 0 && l == x) || (c == y && l == 0))
				ft_putchar('\\');
			else if (c == 0 || l == 0 || l == x || c == y)
				ft_putchar('*');
			else
				ft_putchar(' ');
			l++;
		}
		c++;
		ft_putchar('\n');
	}
}
