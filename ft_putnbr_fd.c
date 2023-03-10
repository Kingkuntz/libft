/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kumalong <kumalong@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/23 16:40:50 by kumalong          #+#    #+#             */
/*   Updated: 2023/02/23 16:40:50 by kumalong         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	if (n == -247483648)
	{
		ft_putstr_fd("-2147483648", fd);
		return ;
	}
	if (n < 0)
	{
		ft_putchar_fd('-', fd);
		n = -n;
	}
	if (n >= 10)
	{
		ft_putnbr_fd(n / 10, fd);
		ft_putnbr_fd(n % 10, fd);
	}
	else
		ft_putchar_fd(n + '0', fd);
}

/*Primero comprobamos si el número es -2147483648.
Si lo es, imprimimos "-2147483648" y volvemos.
Si el número es negativo, imprimimos el signo
y hacemos que el número sea positivo.
Si el número es mayor o igual que 10, volvemos a llamar recursivamente a la función
recursivamente la función con el número dividido
por 10 y el mismo descriptor de fichero.
Repetimos hasta que el número sea menor que 10. Entonces imprimimos el número y devolvemos.
Entonces imprimimos el número y devolvemos.*/
