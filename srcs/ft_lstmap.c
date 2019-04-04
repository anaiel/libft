/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anleclab <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/12 17:57:19 by anleclab          #+#    #+#             */
/*   Updated: 2019/04/04 09:04:23 by anleclab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** Returns a new chained list composed of links which are copies of the links
** in the original list to which is applied the function.
*/
t_list			*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem))
{
	t_list *map_lst;
	
	if (!lst || !(map_lst = ft_lstcpy(lst)))
		return (NULL);
	ft_lstiter(map_lst, f);
	return (map_lst);
}
