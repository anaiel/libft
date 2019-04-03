/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anleclab <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/07 13:22:53 by anleclab          #+#    #+#             */
/*   Updated: 2019/01/23 14:14:38 by anleclab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnew(size_t size)
{
	char	*res;
	size_t	i;

	if (!(res = (char *)malloc(size + 1)))
		return (NULL);
	i = 0;
	while (i <= size)
	{
		res[i] = '\0';
		i++;
	}
	return (res);
}
