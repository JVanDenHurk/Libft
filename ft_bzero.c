/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: justin <justin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/02 12:28:52 by justin            #+#    #+#             */
/*   Updated: 2022/07/20 12:12:19 by jvan-den         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// fills a pointer with zeros

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	unsigned char	*d;
	size_t			i;

	d = s;
	i = 0;
	while (i < n)
	{
		d[i] = 0;
		i++;
	}
	return ;
}
