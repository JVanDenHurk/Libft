/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jvan-den <jvan-den@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/08 09:27:29 by jvan-den          #+#    #+#             */
/*   Updated: 2022/08/03 13:38:51 by jvan-den         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//returns string from starting positon and length of string
#include "libft.h"

char	*ft_substr(char *s, unsigned int start, size_t len)
{
	char	*result;
	size_t	i;
	size_t	remain;

	if (start > ft_strlen(s))
		remain = 0;
	else
		remain = ft_strlen(&s[start]);
	if (remain < len)
		len = remain;
	result = (char *)malloc(sizeof (char) * len + 1);
	i = 0;
	if (result == NULL)
		return (NULL);
	while (i < len)
	{
		result[i] = s[start + i];
		i++;
	}
	result[i] = '\0';
	return (result);
}
