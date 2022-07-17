/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: justin <justin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/28 21:08:00 by justin            #+#    #+#             */
/*   Updated: 2022/07/02 11:52:28 by justin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// compares two strings

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t	i;
	const unsigned char	*strs1;
	const unsigned char	*strs2;

	i = 0;
	strs1 = (const unsigned char *)s1;
	strs2 = (const unsigned char *)s2;
	while (i < n)
	{
		if (strs1[i] != strs2[i])
			return (strs1[i] - strs2[i]);
		i++;
	}
	return (0);
}
