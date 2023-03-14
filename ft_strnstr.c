/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kumalong <kumalong@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/14 16:25:32 by kumalong          #+#    #+#             */
/*   Updated: 2023/02/14 16:25:32 by kumalong         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include "libft.h"

#include <string.h>
#include <unistd.h>
#include <stdio.h>

char	*ft_strnstr(const char *h, const char *n, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
	if (n[0] == '\0')
		return ((char *)h);
	while (h[i] && i < len)
	{
		j = 0;
		while (h[i + j] == n[j] && (i + j) < len)
		{
			if (n[j + 1] == '\0')
				return ((char *)h + i);
			j++;
		}
		i++;
	}
	return (0);
}

/*
int main()
{
	char *res1 = ft_strnstr("holaquetal", "que", 8);
	char *res2 = strnstr("holaquetal", "que", 8);
	printf("RES1:|%s|\nRES2:|%s|\n", res1, res2);
	return (0);
}*/
