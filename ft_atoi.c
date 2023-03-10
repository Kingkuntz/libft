/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kumalong <kumalong@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/15 11:46:39 by kumalong          #+#    #+#             */
/*   Updated: 2023/02/15 11:46:39 by kumalong         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	unsigned char	i;
	long			neg;
	long			res;

	i = 0;
	neg = 1;
	res = 0;
	while (str[i] == ' ' || str[i] == '\t'
		|| str[i] == '\n' || str[i] == '\v'
		|| str[i] == '\f' || str[i] == '\r')
			i++;
	if (str[i] == '-')
		neg = -1;
	if (str[i] == '-' || str[i] == '+')
		i++;
	while (str[i] >= '0' && str[i] <= '9')
	{
		res = res * 10 + str[i] - '0';
		i++;
	}
	return (res * neg);
}

/*Creamos una función que toma una cadena como parámetro.
Inicializamos tres variables, i a 0, neg a 1 y res a 0.
Creamos un bucle while que se salta todos los espacios,
tabuladores y nuevas líneas.
Comprobamos si el primer carácter es un signo menos, si es así
ponemos neg a -1.
A continuación comprobamos si el primer carácter es un signo menos o más,
si es así incrementamos i.
Creamos un bucle while que comprueba si el carácter actual es
un número y si es así lo añadimos a res.
Devolvemos res por neg.*/
