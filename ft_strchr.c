/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: justin <justin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/03 13:53:59 by justin            #+#    #+#             */
/*   Updated: 2022/07/20 10:40:58 by jvan-den         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// searches through string and returns matching character. 
// returns NULL if no matching string.

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	int	i;
	int 	len;
	
	len = ft_strlen(s);
	i = 0;
	while (i <= len)
	{
		if (s[i] == (char)c)
			return ((char *)&s[i]);
		i++;
	}
	return (NULL);
}
