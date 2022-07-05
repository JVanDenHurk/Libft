/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: justin <justin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/05 20:11:27 by justin            #+#    #+#             */
/*   Updated: 2022/07/05 20:51:31 by justin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//Allocates to memory and returns a pointer. sets pointer value to zeros.

#include "libft.h"

void    *ft_calloc(size_t count, size_t size)
{
    void    *ptr;
    int len;

    len = size * count;
    ptr = malloc(len);
    if(!ptr)
        return (NULL);
    ft_bzero(ptr, len);
    return (ptr);
}