/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kumalong <kumalong@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/14 14:15:02 by kumalong          #+#    #+#             */
/*   Updated: 2023/02/14 14:15:02 by kumalong         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_toupper(int c)
{
	if ((c >= 'a' && c <= 'z'))
		return (c -= 32);
	else
		return (c);
}

/*Comenzamos con una sentencia if que comprueba si los char
está entre 'a' y 'z'.
Si lo está, devolvemos c - 32, que es la versión en mayúsculas
de ese carácter.
Si no, devolvemos el carácter tal cual.*/
