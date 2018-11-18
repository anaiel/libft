/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_filelinecount.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anaiel <anaiel@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/18 15:29:47 by anaiel            #+#    #+#             */
/*   Updated: 2018/11/18 15:37:27 by anaiel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <unistd.h>

int     ft_filelinecount(int fd)
{
    int     nblines;
    int     readchar;
    char    buf[51];
    int     i;

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
    }
    return(nblines);
}