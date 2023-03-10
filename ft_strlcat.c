/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kumalong <kumalong@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/14 14:00:34 by kumalong          #+#    #+#             */
/*   Updated: 2023/02/14 14:00:34 by kumalong         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	j;
	size_t	dst_len;
	size_t	src_len;

	src_len = ft_strlen(src);
	dst_len = ft_strlen(dst);
	j = dst_len;
	i = 0;
	if (dst_len < size -1 && size > 0)
	{
		while (src[i] && dst_len + i < size -1)
		{
			dst[j] = src[i];
			j++;
			i++;
		}
		dst[j] = 0;
	}
	if (dst_len >= size)
		dst_len = size;
	return (dst_len + src_len);
}

/* Se inicializan las variables i, j, dst_len y src_len
La variable src_len almacena la longitud de la cadena src
La variable dst_len almacena la longitud de la cadena dst
La variable j almacena la longitud de la cadena dst
La variable i se inicializa a 0
Si el dst_len es menor que el tamaño - 1 y el tamaño es
mayor que 0, se ejecuta el código del bucle while.
El bucle while se ejecuta mientras la cadena src tenga caracteres
y dst_len + i sea menor que size - 1
La cadena dst se añade a la cadena src carácter a carácter
La cadena dst se termina
Si la longitud de la cadena dst es mayor o igual que el tamaño
se asigna a la variable dst_len el valor del tamaño
Se devuelve la longitud de la cadena dst + la longitud de la cadena src*/
