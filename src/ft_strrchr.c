/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anleclab <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/07 17:11:45 by anleclab          #+#    #+#             */
/*   Updated: 2019/01/23 14:14:49 by anleclab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int		i;

	i = ft_strlen(s) - 1;
	if (c == 0)
		return ((char *)(s + i + 1));
	while (i >= 0 && s[i] != c)
		i--;
	if (s[i] == c)
		return ((char *)(s + i));
	else
		return (NULL);
}
