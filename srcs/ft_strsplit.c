/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anleclab <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/08 09:06:03 by anleclab          #+#    #+#             */
/*   Updated: 2019/01/23 14:14:57 by anleclab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	al_nbwords(char const *s, char c)
{
	int		res;
	int		i;

	res = 0;
	i = 0;
	while (s[i])
	{
		if (s[i] == c)
			i++;
		else
		{
			res++;
			while (s[i] && s[i] != c)
				i++;
		}
	}
	return (res);
}

static int	al_wordlen(char const *s, char c)
{
	int		res;

	res = 0;
	while (s[res] && s[res] != c)
		res++;
	return (res);
}

char		**ft_strsplit(char const *s, char c)
{
	int		i;
	int		nbwords;
	int		iword;
	char	**res;

	if (!s)
		return (NULL);
	nbwords = al_nbwords(s, c);
	if (!(res = (char **)malloc(sizeof(char *) * (nbwords + 1))))
		return (NULL);
	i = 0;
	iword = 0;
	while (s[i])
		if (s[i] == c)
			i++;
		else
		{
			if (!(res[iword] = ft_strnew(al_wordlen(s + i, c))))
				return (NULL);
			ft_strncpy(res[iword], s + i, al_wordlen(s + i, c));
			i += al_wordlen(s + i, c);
			iword++;
		}
	res[iword] = NULL;
	return (res);
}
