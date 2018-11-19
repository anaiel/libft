/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstrlst.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anleclab <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/19 09:21:58 by anleclab          #+#    #+#             */
/*   Updated: 2018/11/19 10:00:33 by anleclab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putstrlst(t_list *lst)
{
	if (lst)
	{
		if (!lst->next)
		{
			ft_putstr(lst->content);
			ft_putchar('\n');
		}
		else
		{
			ft_putstrlst(lst->next);
			ft_putstr(lst->content);
			ft_putchar('\n');
		}
	}
}
