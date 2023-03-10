/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kumalong <kumalong@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/22 18:21:54 by kumalong          #+#    #+#             */
/*   Updated: 2023/02/22 18:21:54 by kumalong         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putendl_fd(char *s, int fd)
{
	ft_putstr_fd(s, fd);
	ft_putchar_fd('\n', fd);
}

/*t_putstr_fd(s, fd);
Esta función imprimirá la cadena s en el descriptor de fichero fd
ft_putchar_fd('\n', fd);
Esta función imprimirá el carácter \n en el descriptor de fichero fd.*/
