/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kumalong <kumalong@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/14 12:17:41 by kumalong          #+#    #+#             */
/*   Updated: 2023/02/14 12:17:41 by kumalong         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n)
	{
		((char *)s)[i] = 0;
		i++;
	}
}

/* Ponemos la variable i a 0. Se utilizará como índice
para acceder a los elementos de la matriz.
Iniciamos un bucle while que se ejecutará hasta que i sea igual a n.
Esto significa que el bucle se ejecutará n veces.
Ponemos el elemento en el índice i a 0. Hacemos esto usando un
para convertir el puntero void en un puntero char. Esto es así
porque el array es de tipo char. A continuación, podemos acceder a los
elementos de la matriz utilizando el índice i. Esto equivale a
s[i] = 0;
Incrementamos i para pasar al siguiente elemento del array.*/
