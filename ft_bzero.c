/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: justin <justin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/02 12:28:52 by justin            #+#    #+#             */
/*   Updated: 2022/07/27 12:04:13 by jvan-den         ###   ########.fr       */
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
/*
int main()
{
	int n = 1;
	int *p;
	
	p = &n;

	printf("Before bzero: %d\n", n);

	ft_bzero(p, n);

	printf("After bzero: %d\n", n);
}
*/
