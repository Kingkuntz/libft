/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kumalong <kumalong@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/14 12:30:54 by kumalong          #+#    #+#             */
/*   Updated: 2023/02/14 12:30:54 by kumalong         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t	i;

	i = 0;
	if (!dst && !src)
		return (dst);
	while (i < n)
	{
		((unsigned char *)dst)[i] = ((unsigned char *)src)[i];
		i++;
	}
	return (dst);
}

/*Primero definimos la función ft_memcpy().
A continuación definimos la variable "i" como de tipo size_t.
Comprobamos si el destino y el origen no son NULL.
Se recorre el origen y se copia la memoria del origen al destino.
del origen al destino.
A continuación, devolvemos el destino.*/
