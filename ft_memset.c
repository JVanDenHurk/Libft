/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: justin <justin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/11 19:51:26 by justin            #+#    #+#             */
/*   Updated: 2022/06/28 21:22:28 by justin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t n)
{

	size_t i;
	char *str;

	str = (char *)b;
	i = 0;

	while (i < n)
	{
		str[i] = c;
		i++;
	}
	return (b);
}