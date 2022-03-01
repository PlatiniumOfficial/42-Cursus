/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gletang <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/22 11:22:29 by gletang           #+#    #+#             */
/*   Updated: 2022/02/22 14:38:52 by gletang          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void *ft_memmove(void *dst, const void *src, size_t n)
{
    size_t i;
    unsigned char *dest;
    const unsigned char *source;

    if (dst == NULL || src == NULL || n == 0)
        return (dst);
	else if (dst < src)
		ft_memcpy(dst, src, n);
	else
	{
		i = n;
		dest = dst;
    	source = src;
		while (i > 0)
    	{
        	dest[i] = source[i];
        	i--;
    	}
	}
	dst = dest;
	return dest;
}