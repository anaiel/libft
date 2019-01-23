/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putfile.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anleclab <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/19 09:19:16 by anleclab          #+#    #+#             */
/*   Updated: 2019/01/23 14:11:49 by anleclab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putfile(int fd)
{
	char	buf[51];
	int		readchar;

	buf[50] = 0;
	readchar = read(fd, buf, 50);
	while (readchar > 0)
	{
		ft_putstr(buf);
		readchar = read(fd, buf, 50);
	}
}
