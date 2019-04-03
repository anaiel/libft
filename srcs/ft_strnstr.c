/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anleclab <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/07 17:29:02 by anleclab          #+#    #+#             */
/*   Updated: 2019/01/23 14:14:43 by anleclab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	lh;
	size_t	ln;
	size_t	i;

	if (!*needle)
		return ((char *)haystack);
	lh = ft_strlen(haystack);
	ln = ft_strlen(needle);
	i = 0;
	while (i < len && ln + i <= lh)
	{
		if (ft_strnequ(haystack + i, needle, ln) && i + ln <= len)
			return ((char *)(haystack + i));
		i++;
	}
	return (NULL);
}
