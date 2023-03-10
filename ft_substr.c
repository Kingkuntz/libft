/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kumalong <kumalong@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/15 14:03:31 by kumalong          #+#    #+#             */
/*   Updated: 2023/02/15 14:03:31 by kumalong         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*str;
	size_t	i;
	size_t	temp;

	i = 0;
	if (s == NULL)
		return (NULL);
	if (start > ft_strlen(s))
		return (ft_strdup(""));
		temp = ft_strlen(s);
		temp = temp - start;
	if (temp < len)
		len = temp;
	str = (char *)malloc(sizeof(char) * (len + 1));
	if (str == NULL)
		return (NULL);
	while (s[start] != '\0' && i < len)
	{
		str[i] = s[start];
		i++;
		start++;
	}
	str[i] = '\0';
	return (str);
}

/*Comprueba si la cadena es NULL.
Comprueba si start  es mayor que la longitud de la cadena.
Si lo es, devuelve una cadena vacía.
Resta el start de la longitud de la cadena.
Si la longitud es menor que len, establece len en temp.
Asigna memoria para la nueva cadena.
Copia la cadena a la nueva cadena.
Añade un terminador nulo al final de la cadena.*/
