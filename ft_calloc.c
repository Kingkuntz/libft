/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kumalong <kumalong@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/15 11:56:59 by kumalong          #+#    #+#             */
/*   Updated: 2023/02/15 11:56:59 by kumalong         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	size_t	i;
	void	*ptr;

	i = 0;
	ptr = malloc(count * size);
	if (ptr == NULL)
		return (NULL);
	while (i < count * size)
	{
		((char *)ptr)[i] = 0;
		i++;
	}
	return (ptr);
}

/* Definimos ft_calloc, que recibe un recuento y un tamaño.
Declaramos un entero i y lo ponemos a 0.
Declaramos un puntero a void y lo hacemos igual al resultado de
de malloc, pasando count * size como parámetro.
Si ptr es NULL, devolvemos NULL.
A continuación creamos un bucle que ejecuta count * size veces.
Ponemos a 0 el valor del array en el índice i.
Incrementamos i.
Devolvemos ptr*/
