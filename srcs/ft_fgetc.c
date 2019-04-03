/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fgetc.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anleclab <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/23 14:37:34 by anleclab          #+#    #+#             */
/*   Updated: 2019/01/23 15:42:22 by anleclab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_fgetc(t_file *stream)
{
	int				ret;
	unsigned char	res;

	if (!stream)
		return (-1);
	if (!(stream->buf[0]))
	{
		if ((ret = read(stream->fd, stream->buf, BUFF_SIZE)) <= 0)
		{
			stream->buf[0] = 0;
			return (-1);
		}
		stream->buf[ret] = 0;
		stream->i = 0;
	}
	res = stream->buf[stream->i++];
	return((int)res);
}
