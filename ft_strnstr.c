/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: justin <justin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/02 14:07:19 by justin            #+#    #+#             */
/*   Updated: 2022/07/03 12:23:22 by justin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// returns string if it finds the string otherwise return NULL

#include "libft.h"

char *ft_strnstr(const char *haystack, const char *needle, size_t len)
{
    size_t i;
    size_t j;

    i = 0;
    if (!needle[i])
        return((char *)haystack);
    while(haystack[i] && i <  len)
    {
        j = 0;
        if (haystack[i] == needle[j])
        {
            while (haystack[i + j] == needle[j] && i + j < len)
            {
                if(needle[j + 1] == '\0')
                    return ((char *)&haystack[i]);
                j++;
            }
        }
        i++;
    }
    return (NULL);
}