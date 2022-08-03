/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: justin <justin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/05 20:11:27 by justin            #+#    #+#             */
/*   Updated: 2022/07/27 15:51:33 by jvan-den         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Allocates to heap memory and returns a pointer. 
// fills pointer with zeros.

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void	*ptr;
	size_t	len;

	len = size * count;
	ptr = malloc(len);
	if (!ptr)
		return (NULL);
	ft_bzero(ptr, len);
	return (ptr);
}
