/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anleclab <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/03 21:59:10 by anleclab          #+#    #+#             */
/*   Updated: 2019/04/03 22:09:01 by anleclab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** Returns a pointer to the first link of the copy of the given chained list.
*/
t_list	*ft_lstcpy(t_list *lst)
{
	t_list	*cpy;
	t_list	*new_link;

	if (!lst)
		return (NULL);
	cpy = NULL;
	while (lst)
	{
		if (!(new_link = ft_lstnew(lst->content, lst->content_size)))
			return (cpy);
		ft_lstappend(&cpy, new_link);
		lst = lst->next;
	}
	return (cpy);
}
