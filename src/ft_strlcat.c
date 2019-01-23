/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anleclab <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/07 16:37:15 by anleclab          #+#    #+#             */
/*   Updated: 2019/01/23 14:13:53 by anleclab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	j;

	i = 0;
	while (dst[i] && i < size)
		i++;
	j = 0;
	while (src[j] && size && i + j < size - 1)
	{
		dst[i + j] = src[j];
		j++;
	}
	if (j)
		dst[i + j] = 0;
	while (src[j])
		j++;
	return (i + j);
}
