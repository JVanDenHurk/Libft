/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: justin <justin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/03 13:53:59 by justin            #+#    #+#             */
/*   Updated: 2022/07/11 18:11:36 by justin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// searches string through string and returns matching character. returns NULL if no matching string.

#include "libft.h"

char *ft_strchr(const char *s, int c)
{
    int i;
    
    i = 0;
    
    while(i <= c)
    {
        if(s[i] == (char)c)
            return((char *)&s[i]);
        i++;
    }
    return (NULL);
}