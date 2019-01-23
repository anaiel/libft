/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anleclab <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/12 17:57:19 by anleclab          #+#    #+#             */
/*   Updated: 2019/01/23 14:09:56 by anleclab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static t_list	*al_lstadd(t_list *elem, t_list *lst)
{
	if (!elem)
		return (lst);
	elem->next = lst;
	return (elem);
}

t_list			*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem))
{
	if (!lst)
		return (NULL);
	if (!lst->next)
		return (f(lst));
	else
		return (al_lstadd(f(lst), ft_lstmap(lst->next, f)));
}
