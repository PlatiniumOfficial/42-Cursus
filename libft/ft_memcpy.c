/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gletang <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/22 10:31:16 by gletang           #+#    #+#             */
/*   Updated: 2022/02/22 14:09:12 by gletang          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
    size_t i;
    unsigned char *dest;
    const unsigned char *source;
    
    dest = dst;
    source = src;
    if (dst == src || dst == NULL || src == NULL || n == 0)
        return (dst);
    i = 0;
    while (i < n)
    {
        dest[i] = source[i];
        i++;
    }
    dst = dest;
    return (dst);
}