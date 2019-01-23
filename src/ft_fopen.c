/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fopen.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anleclab <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/23 15:03:31 by anleclab          #+#    #+#             */
/*   Updated: 2019/01/23 15:39:34 by anleclab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_file	*ft_fopen(const char *path)
{
	t_file	*stream;

	if (!(stream = (t_file *)malloc(sizeof(t_file))))
		return (NULL);
	if ((stream->fd = open(path, O_RDONLY)) == -1)
		return (NULL);
	stream->buf[0] = 0;
	stream->i = 0;
	return (stream);
}
