/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchar.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: justin <justin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/03 15:51:58 by justin            #+#    #+#             */
/*   Updated: 2022/07/03 16:06:10 by justin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// searches backwards through string and returns text upto that character

#include "libft.h"

char *ft_strrchr(const char *s, int c)
{
    size_t i;
    
    i = ft_strlen(s);
    while(i > 0)
    {
        if(s[i] == (char)c)
            return((char *)&s[i]);
        i--;
    }
    return (NULL);
}