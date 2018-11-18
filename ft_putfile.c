/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putfile.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anaiel <anaiel@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/18 14:37:27 by anaiel            #+#    #+#             */
/*   Updated: 2018/11/18 14:46:48 by anaiel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <unistd.h>

void    ft_putfile(int  fd)
{
    char    buf[51];
    int     readchar;

    buf[50] = 0;
    readchar = read(fd, buf, 50);
    while (readchar > 0)
    {
        ft_putstr(buf);
        readchar = read(fd, buf, 50);
    }
}