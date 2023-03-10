/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kumalong <kumalong@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/10 16:43:51 by kumalong          #+#    #+#             */
/*   Updated: 2023/03/10 16:43:51 by kumalong         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

ft_list	*ft_lstmap(t_list*lst, void *(*f) (void) (*del) (void *))
{
	t_list	*thing;
	t_list	*new;
	void	*content;

	new = NULL;
	while (lst)
	{
		content = f (lst -> content);
		thing = ft_lstnew(content);
		if (!thing)
		{
			free (content);
			ft_lstclear(&new, del);
			return (0);
		}
		ft_lstadd_back(&new, thing);
		lst = lst -> next;
	}
