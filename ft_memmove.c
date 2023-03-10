/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kumalong <kumalong@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/14 13:16:28 by kumalong          #+#    #+#             */
/*   Updated: 2023/02/14 13:16:28 by kumalong         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	int	i;

	if (!dst && !src)
		return (dst);
	if (dst > src)
	{
		i = (int)len -1;
		while (i >= 0)
		{
			((char *)dst)[i] = ((char *)src)[i];
			i--;
		}
	}
	else
	{
		i = 0;
		while (i < (int)len)
		{
			((char *)dst)[i] = ((char *)src)[i];
			i++;
		}
	}
	return (dst);
}

/*Comprueba si el destino y el origen no son
NULL
si lo son, devuelve el puntero de destino.
Compruebe si la dirección de destino es mayor que la dirección de origen
si lo es, las direcciones de memoria de origen y destino se solapan.
Si se solapan,
empezamos por el final del bloque de memoria
y copiamos hacia atrás hasta el principio.
Si la dirección de destino no es mayor que la dirección de origen
entonces las direcciones de memoria de origen y destino no se solapan.
Podemos copiar hacia delante desde el inicio del bloque de memoria hasta el 
final.*/
