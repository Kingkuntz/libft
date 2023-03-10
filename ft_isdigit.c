/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kumalong <kumalong@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/13 17:41:25 by kumalong          #+#    #+#             */
/*   Updated: 2023/02/13 17:41:25 by kumalong         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isdigit(int c)
{
	if (c >= 48 && c <= 57)
		return (1);
	return (0);
}

/* Estamos creando una función llamada ft_isdigit que toma un
parámetro de tipo int llamado c.
Luego tenemos una sentencia if que comprueba si c es mayor que
o igual a 0 y menor o igual a 9.
Si es cierto, devolvemos el valor 1, en caso contrario devolvemos el valor 0*/
