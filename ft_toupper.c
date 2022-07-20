/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: justin <justin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/28 19:14:05 by justin            #+#    #+#             */
/*   Updated: 2022/07/20 11:30:46 by jvan-den         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// turns lowercase to uppercase

#include "libft.h"

int	ft_toupper(int c)
{
	if (c >= 'a' && c <= 'z')
		c = c + 32;
	return (c);
}
