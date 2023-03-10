/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kumalong <kumalong@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/14 11:49:55 by kumalong          #+#    #+#             */
/*   Updated: 2023/02/14 11:49:55 by kumalong         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isascii(int c)
{
	if (c >= 0 && c <= 127)
		return (1);
	return (0);
}

/*La función toma un argumento de tipo int.
Si el argumento está entre 0 y 127, la función devuelve 1. 
Si el argumento está fuera del rango, la función devuelve 0.
Si el argumento está fuera del rango, la función devuelve 0.*/
