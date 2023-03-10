/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kumalong <kumalong@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/06 14:48:49 by kumalong          #+#    #+#             */
/*   Updated: 2023/03/06 14:48:49 by kumalong         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	int	ft_len(int n)
{
	int	len;

	len = 0;
	if (n <= 0)
		len++;
	while (n != 0)
	{
		n = n / 10;
		len++;
	}
	return (len);
}

char	*ft_itoa(int n)
{
	char		*str;
	int			len;
	int			neg;

	neg = 0;
	len = ft_len(n);
	str = (char *)malloc(sizeof(char) * (len + 1));
	if (!str)
		return (NULL);
		str[len] = '\0';
	if (n < 0)
	{
		neg = 1;
		n = -n;
	}
	while (len --)
	{
		str[len] = n % 10 + '0';
		n = n / 10;
	}
	if (neg)
	str[0] = '-';
	return (str);
}
/*Calculamos la longitud del número dividiéndolo por
10 una y otra vez hasta que sea igual a cero.
2. Si el número es negativo, sumamos 1 a la longitud del número.
3. 3. Si el número es igual a 0, sumamos 1 a la longitud del número.
El siguiente paso es crear una cadena para almacenar el número convertido.
Usamos malloc para asignar memoria a la cadena.
Creamos un puntero al final de la cadena y lo inicializamos con la longitud de la cadena.
con la longitud de la cadena.
El último carácter de la cadena es el carácter nulo.
A continuación, comprobamos si el número es negativo.
Si lo es, ponemos el signo menos en el primer carácter de la cadena.
Si el número es igual a 0, el primer carácter de la cadena es el dígito cero.
la cadena al dígito cero.
A continuación, convertimos el número en una cadena utilizando el operador
para obtener el último dígito
y decrementamos el puntero hasta el final de la cadena.
Hacemos esto hasta que el número sea igual a cero.*/
