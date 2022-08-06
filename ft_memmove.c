/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: justin <justin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/29 19:49:03 by justin            #+#    #+#             */
/*   Updated: 2022/08/03 15:18:18 by jvan-den         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// copies n bytes of string and removes memory blocks afterwards

#include "libft.h"

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char		*d;
	const unsigned char	*s;
	size_t				i;

	d = dst;
	s = src;
	i = 0;
	if (d == NULL && s == NULL)
		return (NULL);
	if (d < s)
	{
		while (i++ < len)
		{
			d[i - 1] = s[i - 1];
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
