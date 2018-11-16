/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anleclab <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/09 14:22:39 by anleclab          #+#    #+#             */
/*   Updated: 2018/11/14 16:54:27 by anleclab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	al_nbdigit(int n)
{
	int		res;

	res = 1;
	n = (n < 0 ? -n : n);
	while (n >= 10)
	{
		res++;
		n /= 10;
	}
	return (res);
}

char		*ft_itoa(int n)
{
	char	*res;
	int		i;
	int		len;

	if (n == -2147483648)
	{
		if (!(res = ft_strdup("-2147483648")))
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
