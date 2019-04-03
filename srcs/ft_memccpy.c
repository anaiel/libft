/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anleclab <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/09 18:49:37 by anleclab          #+#    #+#             */
/*   Updated: 2019/04/03 22:23:14 by anleclab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** Copies a maximum of n bits of src to dst, until character c is found.
*/
void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	size_t	i;

	i = -1;
	if (!src && !dst)
		return (NULL);
	while (++i < n && ((unsigned char *)src)[i] != (unsigned char)c)
		((unsigned char *)dst)[i] = ((unsigned char *)src)[i];
	if (((unsigned char *)src)[i] == (unsigned char)c && i != n)
	{
		((unsigned char *)dst)[i] = ((unsigned char *)src)[i];
		return (dst + i + 1);
	}
	return (NULL);
}
