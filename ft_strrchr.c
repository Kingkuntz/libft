/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kumalong <kumalong@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/14 14:38:59 by kumalong          #+#    #+#             */
/*   Updated: 2023/02/14 14:38:59 by kumalong         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int	i;

	i = 0;
	while (s[i])
		i++;
	while (i >= 0)
	{
		if (s[i] == (char)c)
			return ((char *)(s + i));
		i--;
	}
	return (0);
}

/* La función toma dos parámetros, una cadena y un carácter.
Creamos una variable llamada i y la ponemos a 0.
Luego recorremos la cadena e incrementamos i cada vez que pasamos por el bucle.
por el bucle.
Una vez que llegamos al final de la cadena, pasamos por la cadena
y comprobamos si el carácter de cada índice es el carácter que buscamos.
y buscamos.
Si lo es, devolvemos el carácter en ese índice.
Si llegamos al principio de la cadena sin
encontrar el carácter, devolvemos 0.*/
