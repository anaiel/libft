/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_llitoa.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anleclab <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/06 18:25:53 by anleclab          #+#    #+#             */
/*   Updated: 2019/01/23 14:09:22 by anleclab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	al_nbdigit(long long int n)
{
	int					res;
	unsigned long long	tmp;

	res = 1;
	tmp = (n < 0 ? -n : n);
	while (tmp >= 10)
	{
		res++;
		tmp /= 10;
	}
	return (res);
}

char		*ft_llitoa(long long int n)
{
	char				*res;
	long long int		i;
	long long int		len;

	len = (n < 0 ? al_nbdigit(n) + 1 : al_nbdigit(n));
	if (!(res = ft_strnew(len)))
		return (NULL);
	res[0] = (n == 0 ? '0' : '-');
	if ((unsigned long)n == -9223372036854775808U)
		return (ft_strdup("-9223372036854775808"));
	i = len - 1;
	if (n < 0)
		n = -n;
	while (n)
	{
		res[i] = '0' + n % 10;
		n /= 10;
		i--;
	}
	return (res);
}
