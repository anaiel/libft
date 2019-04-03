/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anleclab <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/09 14:22:39 by anleclab          #+#    #+#             */
/*   Updated: 2019/04/03 21:34:43 by anleclab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	nbdigit(int n)
{
	int				res;

	res = 1;
	n = (n < 0) ? -n : n;
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
	int		len;

	if (n == INT_MIN)
	{
		res = ft_strdup("-2147483648");
		return (res);
	}
	len = (n < 0 ? nbdigit(n) + 1 : nbdigit(n));
	n = (n < 0 ? -n : n);
	if (!(res = ft_strnew(len)))
		return (NULL);
	res[0] = (n == 0 ? '0' : '-');
	while (n)
	{
		res[--len] = '0' + n % 10;
		n /= 10;
	}
	return (res);
}
