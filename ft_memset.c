/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: justin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/11 19:51:26 by justin            #+#    #+#             */
/*   Updated: 2022/06/11 20:06:41 by justin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	size_t i;
	unsigned char c;
	unsigned char *s[i];

	i = -1;
	while (i < n)
	{
		s[i] = c;
		i++;
	}
	return (s);
}

#include <stdio.h>

int main()
{
	char mem[10];

	ft_memset(mem, 'a', sizeof(char) * 10);
}
