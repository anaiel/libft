/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anleclab <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/09 19:29:30 by anleclab          #+#    #+#             */
/*   Updated: 2019/01/23 14:10:31 by anleclab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_memcmp(const void *s1, const void *s2, size_t n)
{
	int		res;
	size_t	i;

	res = 0;
	i = 0;
	while (i < n && res == 0)
	{
		res = ((unsigned char *)s1)[i] - ((unsigned char *)s2)[i];
		i++;
	}
	return (res);
}
