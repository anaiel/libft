/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_litoa.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anleclab <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/07 11:43:38 by anleclab          #+#    #+#             */
/*   Updated: 2019/01/23 14:09:20 by anleclab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	al_nbdigit(long int n)
{
	int				res;
	unsigned long	tmp;

	res = 1;
	tmp = (n < 0 ? -n : n);
	while (tmp >= 10)
	{
		res++;
		tmp /= 10;
	}
	return (res);
}

char		*ft_litoa(long int n)
{
	char			*res;
	int				i;
	int				len;

	if ((unsigned long)n == -9223372036854775808U)
	{
		if (!(res = ft_strdup("-9223372036854775808")))
			return (NULL);
		return (res);
	}
	len = (n < 0 ? al_nbdigit(n) + 1 : al_nbdigit(n));
	n = (n < 0 ? -n : n);
	if (!(res = ft_strnew(len)))
		return (NULL);
	res[0] = (n == 0 ? '0' : '-');
	i = len - 1;
	while (n)
	{
		res[i] = '0' + n % 10;
		n /= 10;
		i--;
	}
	return (res);
}
