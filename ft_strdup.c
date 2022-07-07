/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: justin <justin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/06 19:56:41 by justin            #+#    #+#             */
/*   Updated: 2022/07/07 19:40:25 by justin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//copies string to memory allocated pointer

#include "libft.h"

char    *ft_strdup(const char *s1)
{
    size_t size;
    char *ptr;
    unsigned int i;

    size = ft_strlen(s1);
    ptr = malloc((size + 1) * sizeof(char));
    i = 0;
    if (!ptr)
        return (NULL);
    while (s1[i])
    {
        ptr[i] = s1[i];
        i++;
    }
    ptr[i] = '\0';
    return (ptr);
}