/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_filelinecount.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anleclab <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/19 09:18:47 by anleclab          #+#    #+#             */
/*   Updated: 2019/01/23 14:08:47 by anleclab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_filelinecount(int fd)
{
	int		nblines;
	int		readchar;
	char	buf[51];
	int		i;

	buf[50] = 0;
	readchar = read(fd, buf, 50);
	nblines = (readchar > 0 ? 1 : 0);
	while (readchar > 0)
	{
		i = 0;
		while (i < 50)
		{
			if (buf[i] == '\n')
				nblines++;
			i++;
		}
		readchar = read(fd, buf, 50);
	}
	return (nblines);
}
