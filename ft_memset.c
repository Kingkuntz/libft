/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kumalong <kumalong@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/14 12:09:15 by kumalong          #+#    #+#             */
/*   Updated: 2023/02/14 12:09:15 by kumalong         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *k, int c, size_t len)
{
	size_t	i;

	i = 0;
	while (i < len)
	{
		((unsigned char *)k)[i] = (unsigned char)c;
		i ++;
	}
	return (k);
}

/* Convierte el puntero void b en un puntero unsigned char.
Convierte el int c en un unsigned char.
Establece los primeros len bytes del bloque de memoria apuntado
por b al valor especificado c.
Devuelve un puntero a la zona de memoria b.*/
