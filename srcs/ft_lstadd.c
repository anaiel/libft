/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anleclab <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/12 17:40:44 by anleclab          #+#    #+#             */
/*   Updated: 2019/04/03 21:47:30 by anleclab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** Adds a new link at the beginning of the chain.
*/
void	ft_lstadd(t_list **alst, t_list *new)
{
	if (!new || !alst)
		return ;
	new->next = *alst;
	*alst = new;
}
