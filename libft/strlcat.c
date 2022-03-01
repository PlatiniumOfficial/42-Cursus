/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gletang <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/21 16:09:55 by gletang           #+#    #+#             */
/*   Updated: 2022/02/21 18:16:27 by gletang          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t  ft_strlcat(char *dst, const char *src, size_t size)
{
    size_t  len_dst;
    size_t  len_src;
    size_t  i;

    len_dst = ft_strlen(dst);
    len_src = ft_strlen(src);
    if (size < len_dst)
        len_src += size;
    else
        len_src += len_dst;
    i = 0;
    while (src[i] && i < (size - len_dst - 1))
    {
        dst[i + len_dst] = src[i];
        i++;
    }
    dst[i + len_dst] = '\0';
    return (len_src);
}