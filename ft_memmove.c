/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: justin <justin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/29 19:49:03 by justin            #+#    #+#             */
/*   Updated: 2022/07/21 21:50:17 by justin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// copies n bytes of string and removes memory blocks afterwards

#include "libft.h"

void	*check_null(unsigned char *f, const unsigned char *s)
{
	if (f == NULL && s == NULL)
		return (NULL);
	return (0);
}

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char		*d;
	const unsigned char	*s;
	size_t				i;

	d = dst;
	s = src;
	i = 0;
	check_null(d, s);
	if (d < s)
	{
		while (i < len)
		{
			d[i] = s[i];
			i++;
		}
	}
	else
	{
		while (len-- > i)
		{	
			d[len] = s[len];
		}
	}
	return (dst);
}
