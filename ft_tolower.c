/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kumalong <kumalong@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/14 14:20:16 by kumalong          #+#    #+#             */
/*   Updated: 2023/02/14 14:20:16 by kumalong         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_tolower(int c)
{
	if ((c >= 'A' && c <= 'Z'))
		return (c += 32);
	else
		return (c);
}

/*Primero, comprobamos si el carácter está en mayúsculas o no.
Si es mayúscula, añadimos 32 al carácter para convertirlo en minúscula.
(El valor ASCII de las minúsculas es 32 mayor que el de las
letras mayúsculas correspondientes)
Si ya está en minúsculas, devolvemos el carácter.*/
