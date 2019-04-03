/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memalloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anleclab <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/09 19:35:04 by anleclab          #+#    #+#             */
/*   Updated: 2019/04/03 22:18:38 by anleclab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** Allocates memory and sets the bits to 0.
*/
void	*ft_memalloc(size_t size)
{
	void	*res;

	if (!(res = malloc(size)))
		return (NULL);
	ft_bzero(res, size);
	return (res);
}
