/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jvan-den <jvan-den@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/08 09:27:29 by jvan-den          #+#    #+#             */
/*   Updated: 2022/07/20 11:29:21 by jvan-den         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//returns string from starting positon and length of string
#include "libft.h"

char	*ft_substr(char *s, unsigned int start, size_t len)
{
	size_t	i;
	size_t	i2;
	char	*str;

	str = (char *)malloc(sizeof (*s) * (len + 1));
	if (!str)
		return (NULL);
	i = 0;
	i2 = 0;
	while (s[i])
	{
		if (i >= start && i2 < len)
		{
			str[i2] = s[i];
			i2++;
		}
		i++;
	}
	str[i2] = 0;
	return (str);
}
