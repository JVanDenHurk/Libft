/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jvan-den <jvan-den@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/08 10:39:13 by jvan-den          #+#    #+#             */
/*   Updated: 2022/07/08 15:14:49 by jvan-den         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//removes set characters from string

#include "libft.h"

char *ft_strtrim(char const *s1, char const *set)
{
    size_t front;
    size_t back;
    char* result;

    result = 0;
    if(s1 != 0 && set != 0)
    {
        front = 0;
        back = ft_strlen(s1);
        while (s1[front] && ft_strchr(set, s1[front]))
            front++;
        while (s1[back] && ft_strchr(set, s1[back] && back > front))
            back--;
        result = (char*)malloc(sizeof(char) * (back - front));
        if (result)
            ft_strlcpy(result, &s1[front], back - front);
    }
    return (result);
}
int main()
{
	printf("%s\n", ft_strtrim("abqbc", "abc"));
	printf("%s\n", ft_strtrim("xavocadoyz", "xyz"));
	return 0;
}