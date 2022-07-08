/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jvan-den <jvan-den@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/03 13:53:59 by justin            #+#    #+#             */
/*   Updated: 2022/07/08 14:52:32 by jvan-den         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// searches string and returns text upto that character

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