/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstrarray.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anleclab <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/19 09:20:49 by anleclab          #+#    #+#             */
/*   Updated: 2018/11/19 10:00:43 by anleclab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putstrarray(const char **str)
{
	int		i;

	if (str)
	{
		i = 0;
		while (str[i])
		{
			ft_putstr(*(str + i));
			ft_putchar('\n');
			i++;
		}
	}
}
