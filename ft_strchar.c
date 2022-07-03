/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchar.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: justin <justin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/03 13:53:59 by justin            #+#    #+#             */
/*   Updated: 2022/07/03 16:00:34 by justin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// searches string and returns text upto that character

#include "libft.h"

char *ft_strchr(const char *s, int c)
{
    size_t i;
    
    i = 0;
    
    while(i <= c)
    {
        if(s[i] == (char)c)
            return((char *)&s[i]);
        i++;
    }
    return (NULL);
}