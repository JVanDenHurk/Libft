/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: justin <justin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/29 18:51:14 by justin            #+#    #+#             */
/*   Updated: 2022/07/27 15:20:56 by jvan-den         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// returns character numbers from ascii table

#include "libft.h"

int	ft_isdigit(int c)
{
	return (c >= '0' && c <= '9');
}
/*
int main()
{
	char c = '1';

	if(ft_isdigit(c))
		printf("This is a digit");
	else 
		printf("This is not a digit");
}
*/
