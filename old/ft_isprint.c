/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: justin <justin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/29 19:16:39 by justin            #+#    #+#             */
/*   Updated: 2022/07/27 16:17:04 by jvan-den         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// returns printable characters from ascii table

#include"libft.h"

int	ft_isprint(int c)
{
	return (c >= 32 && c <= 126);
}
/*
int main()
{
	if(ft_isprint('1'))
		printf("This is a printable character");
	else
		printf("this is not a printable character");
}
*/
