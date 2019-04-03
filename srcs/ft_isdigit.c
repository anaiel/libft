/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anleclab <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/07 09:25:20 by anleclab          #+#    #+#             */
/*   Updated: 2019/04/03 21:26:03 by anleclab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** Returns true if the character is a digit, false otherwise.
*/
int		ft_isdigit(int c)
{
	return ((c >= '0' && c <= '9'));
}
