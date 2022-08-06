/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: justin <justin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/03 16:19:01 by justin            #+#    #+#             */
/*   Updated: 2022/07/20 10:54:34 by jvan-den         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// put two strings together

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	di;
	size_t	si;
	size_t	tlen;

	if (!dstsize)
		return (ft_strlen(src));
	if (dstsize < ft_strlen(dst))
		tlen = dstsize + ft_strlen(src);
	else
		tlen = ft_strlen(dst) + ft_strlen(src);
	di = ft_strlen(dst);
	si = 0;
	while (src[si] && di + 1 < dstsize)
	{
		dst[di] = src[si];
		di++;
		si++;
	}
	dst[di] = '\0';
	return (tlen);
}
