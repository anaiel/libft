/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstrlst.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anaiel <anaiel@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/17 11:55:36 by anaiel            #+#    #+#             */
/*   Updated: 2018/11/17 12:05:34 by anaiel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void    ft_putstrlst(t_list *lst)
{
    if (lst)
    {
        if (!lst->next)
            ft_putstr(lst->content);
        else
        {
            ft_putstrlst(lst->next);
            ft_putstr(lst->content);
        }
    }
}