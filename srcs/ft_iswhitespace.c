/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iswhitespace.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anleclab <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/03 20:41:06 by anleclab          #+#    #+#             */
/*   Updated: 2019/04/03 20:45:28 by anleclab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** Returns true if c is a whitespace, otherwise false.
*/
int		ft_iswhitespace(int c)
{
	return((c == '\t' || c == '\n' || c == '\v' || c == '\f' || c == '\r'
			|| c == ' '));
}
