/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplitlst.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anleclab <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/14 17:33:51 by anleclab          #+#    #+#             */
/*   Updated: 2018/11/16 15:38:50 by anleclab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

t_list	*ft_strsplitlst(char *s, char c)
{
	t_list	*res;
	t_list	*new;
	int		i;
	size_t	len;

	res = ft_lstnew(NULL, 0);
	if (!s)
		return (res);
	i = 0;
	while (s[i])
	{
		while (s[i] == c)
			i++;
		len = 0;
		while (s[i + len] && s[i + len] != c)
			len++;
		if (len)
		{
			new = ft_lstnew(ft_strsub(s, i, len), len);
			ft_lstadd(&res, new);
		}
		i += len;
	}
	return (res);
}
