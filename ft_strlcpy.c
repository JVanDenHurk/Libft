/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: justin <justin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/03 18:30:30 by justin            #+#    #+#             */
/*   Updated: 2022/07/03 18:56:58 by justin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// copies src to dest.

#include "libft.h"

size_t ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
    size_t i;

    i = 0;
    if (!dstsize)
        return (ft_strlen(src));
    while(i < dstsize && src[i])
    {
        dst[i] = src[i];
        i++;
    }
    if(i < dstsize)
        dst[i]= '/0';
    return (ft_strlen(src));
}