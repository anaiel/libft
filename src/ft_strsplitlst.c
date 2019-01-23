/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplitlst.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anleclab <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/14 17:33:51 by anleclab          #+#    #+#             */
/*   Updated: 2019/01/23 14:16:40 by anleclab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_strsplitlst(char *s, char c)
{
	t_list	*res;
	t_list	*new;
	int		i;
	size_t	len;

	res = NULL;
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
