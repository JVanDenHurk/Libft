/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: justin <justin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/29 19:11:20 by justin            #+#    #+#             */
/*   Updated: 2022/07/27 16:11:58 by jvan-den         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// returns ascii characters from ascii table

#include "libft.h"

int	ft_isascii(int c)
{
	return (c >= 0 && c <= 127);
}
/*
int main()
{
	int n = 1;
	int N = 128;	
	char c = 'c';
	char C = 'C';

	if(ft_isascii(N))
		printf("This is on the normal ascii table");
	else
		printf("This is outside the ascii table");
}
*/
