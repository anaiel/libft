/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anleclab <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/07 17:46:36 by anleclab          #+#    #+#             */
/*   Updated: 2019/01/23 14:15:16 by anleclab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strsub(char const *s, unsigned int start, size_t len)
{
	char	*res;
	size_t	i;

	if (!(res = ft_strnew(len)))
		return (NULL);
	i = start;
	while (s && s[i] && i - start < len)
	{
		res[i - start] = s[i];
		i++;
	}
	return (res);
}
