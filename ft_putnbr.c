/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anleclab <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/09 15:31:10 by anleclab          #+#    #+#             */
/*   Updated: 2018/11/14 16:08:41 by anleclab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <unistd.h>

void	ft_putnbr(int n)
{
	int		pow;
	char	s[1];

	if (n == -2147483648)
		write(1, "-2147483648", 11);
	else if (n == 0)
		write(1, "0", 1);
	else
	{
		if (n < 0)
		{
			write(1, "-", 1);
			n *= -1;
		}
		pow = 1;
		while (n / pow >= 10)
			pow *= 10;
		while (pow)
		{
			*s = n / pow + '0';
			write(1, s, 1);
			n = n % pow;
			pow /= 10;
		}
	}
}
