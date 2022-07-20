/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: justin <justin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/03 12:23:52 by justin            #+#    #+#             */
/*   Updated: 2022/07/20 11:18:13 by jvan-den         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// comapres the strings returns the difference between the 
// two on the ascii table. otherwise reutrn 0;

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n)
	{
		if (s1[i] && s2[i] == s1[i])
		{
			i++;
		}
		return ((unsigned char) s1[i] - (unsigned char) s2[i]);
	}
	return (0);
}
