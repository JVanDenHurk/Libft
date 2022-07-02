/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: justin <justin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/29 19:33:52 by justin            #+#    #+#             */
/*   Updated: 2022/07/02 12:06:55 by justin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// copies memory of source to destination

#include "libft.h"

void    *ft_memcpy(void *dst, const void *src, size_t n)
{
    unsigned char *d;
    const unsigned char *s;
    size_t i;

    if(!dst)
        return (NULL);
    d = dst;
    s = src;
    i = 0;
    while (i < n)
    {
        d[i] = s[i];
        i++;
    }
    return (dst);
}