/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anleclab <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/08 08:48:42 by anleclab          #+#    #+#             */
/*   Updated: 2019/01/23 14:15:22 by anleclab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s)
{
	int		len;
	int		st;
	int		j;

	if (!(st = 0) && !s)
		return (NULL);
	while (s[st] && (s[st] == ' ' || s[st] == '\n' || s[st] == '\t'))
		st++;
	len = st;
	while (s[len])
	{
		if (!(j = 0) && s[len] != ' ' && s[len] != '\n' && s[len] != '\t')
			len++;
		else
		{
			while (s[len + j] && (s[len + j] == ' ' || s[len + j] == '\n'
						|| s[len + j] == '\t'))
				j++;
			if (s[len + j] != '\0')
				len += j;
			else
				return (ft_strsub(s, st, len - st));
		}
	}
	return (ft_strsub(s, st, len - st));
}
