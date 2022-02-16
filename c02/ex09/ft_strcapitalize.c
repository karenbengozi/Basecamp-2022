/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kferreir <kferreir@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/16 13:17:15 by kferreir          #+#    #+#             */
/*   Updated: 2022/02/16 17:01:27 by kferreir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcapitalize(char *str)
{
	int	i;
	
	while (*str)
	{
		if (*str >= 'A' && *str <= 'Z')
			*str = *str + 32;
		str++;
	}
	i = 0;
	while (str[i] != '\0')
	{
		if (*str >= 'a' && *str <= 'z')
		{
			if (i = 0)
			{
				
			}
		}
	}
	return (str);
}
i = 0;
// str[i] + 1 != str >= 'a' e str <= 'z' && str[i] != *str <= '0' e *str => '9'

str[0] = 'O'
str[1] = 'i'
str[2] = ','
str[3] = ' '
str[4] = 'T'
str[5] = 'u'
str[6] = 'd'
str[7] = 'o'
str[8] = ' '
str[9] = 'B'

// "oi, tudo bem? 42palavras quarenta-e-duas; cinquenta+e+um"

// se é a primeira posição, a letra você transforma em maiusculo
// se não for número manter minuscula

// toda vez que você tiver str >= 'a' e str <= 'z'  -----> você decrementa *str - 32 (maiuscula)
// se *str <= 0 e *str =>9  não alterar

// str[i] 
// se i <= i - 1 

{
	int	i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}


// se 
// se a letra tiver antes de 