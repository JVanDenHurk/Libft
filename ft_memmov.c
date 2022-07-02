/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmov.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: justin <justin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/29 19:49:03 by justin            #+#    #+#             */
/*   Updated: 2022/07/02 12:22:11 by justin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// copies n bytes of string and removes memory blocks afterwards

#include "libft.h"

void    *ft_memmov(void *dst, const void *src, size_t len)
{
    unsigned char *d;
    const unsigned char *s;
    size_t i;

    if(!dst)
        return (NULL);
    d = dst;
    s = src;
    i = 0;
    while (i < len)
    {
        d[i] = s[i];
        i++;
    }
    i = len;
    while (i > 0)
    {
        d[i - 1] = s[i - 1];
        i--;
    }
    return (dst);
}