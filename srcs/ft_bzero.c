/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anleclab <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/09 18:22:55 by anleclab          #+#    #+#             */
/*   Updated: 2019/04/03 20:55:50 by anleclab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** Sets n bits to 0.
*/
void	ft_bzero(void *s, size_t n)
{
	ft_memset(s, 0, n);
}
