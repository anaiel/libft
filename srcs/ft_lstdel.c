/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdel.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anleclab <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/12 17:11:28 by anleclab          #+#    #+#             */
/*   Updated: 2019/01/23 14:09:35 by anleclab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstdel(t_list **alst, void (*del)(void *, size_t))
{
	t_list	*temp;

	if (*alst)
	{
		while ((*alst)->next)
		{
			temp = (*alst)->next;
			ft_lstdelone(alst, del);
			*alst = temp;
		}
		ft_lstdelone(alst, del);
	}
}
