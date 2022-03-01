/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gletang <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/21 16:01:55 by gletang           #+#    #+#             */
/*   Updated: 2022/02/21 16:09:10 by gletang          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <stdlib.h>
# include <unistd.h>

// Partie 1 - Fonction de la libc
int ft_isalpha(int c); // A vérifier
int ft_isdigit(int c); // A vérifier
int ft_isalnum(int c); // A vérifier
int ft_isascii(int c); // A vérifier
int ft_isprint(int c); // A vérifier
size_t  ft_strlen(const char *s); // A vérifier
void    *ft_memset(void *b, int c, size_t n); // A vérifier
void    ft_bzero(void *s, size_t n); // A vérifier
void    *ft_memcpy(void *dest, const void *src, size_t n); // A vérifier
void    *ft_memmove(void *dest, const void *src, size_t n); // A vérifier
size_t  ft_strlcpy(char *dst, const char *src, size_t size); // A vérifier
size_t  ft_strlcat(char *dst, const char *src, size_t size); // A vérifier

#endif