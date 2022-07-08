/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jvan-den <jvan-den@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/08 09:46:23 by jvan-den          #+#    #+#             */
/*   Updated: 2022/07/08 10:13:59 by jvan-den         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//joins s1 and s2 to string

#include "libft.h"

char *ft_strjoin(char const *s1, char const *s2)
{
    char *str;
    char * size;
    size_t i;
    size_t i2;
    
    //str = (char*)malloc(sizeof((*s1) * (ft_strlen(s1) + ft_strlen(s2 + 1))));
    *size = *s1 * (ft_strlen(s1) + ft_strlen(s2));
    str = (char*)malloc(sizeof(size));

    if(!str)
        return (NULL);
    i = 0;
    i2 = 0;
    while (s1[i])
    {
        str[i2++] = s1[i];
        i++;
    }
    i = 0;
    while (s2[i])
    {
        str[i2] = s2[i];
        i++;
    }
    str[i2] = 0;
    return (str);
}

int main()
{
    char s1[10] = "attack";
    char s2[10] = "attack";
    char ret;

    ret = ft_strchr(s1, s2);

    printf("%s\n", ret);
}