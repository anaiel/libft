/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ldouble_power.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anleclab <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/23 17:16:09 by anleclab          #+#    #+#             */
/*   Updated: 2018/12/23 17:18:03 by anleclab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

long double		ft_ldouble_power(long double n, int pow)
{
	if (pow == 0)
		return (1);
	if (pow > 0)
		return (n * ft_ldouble_power(n, pow - 1));
	if (pow < 0)
		return (n / ft_ldouble_power(n, pow + 1));
	return (0);
}
