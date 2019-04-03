/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anleclab <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/07 10:08:42 by anleclab          #+#    #+#             */
/*   Updated: 2019/04/03 21:22:53 by anleclab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** Returns true if the character is alphanumerical.
*/
int		ft_isalnum(int c)
{
	return((ft_isalpha(c) || ft_isdigit(c));
}
