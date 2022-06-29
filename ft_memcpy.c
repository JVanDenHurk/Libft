/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: justin <justin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/29 19:33:52 by justin            #+#    #+#             */
/*   Updated: 2022/06/29 19:48:23 by justin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void    *ft_memcpy(void *dst, const void *src, size_t n)
{
    size_t i;

    if(!dst)
        return (NULL);
    i = 0;
    while (i < n)
    {
        *(char *)(dst  + i) = *(char *)(src + i);
        i++;
    }
    return (dst);
}