/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: justin <justin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/29 19:02:47 by justin            #+#    #+#             */
/*   Updated: 2022/07/27 14:44:06 by jvan-den         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// returns numbers from 0 to 9, a to z and A to Z from the ascii table.

#include "libft.h"

int	ft_isalnum(int c)
{
	return ((c >= '0' && c <= '9')
		|| (c >= 'a' && c <= 'z')
		|| (c >= 'A' && c <= 'Z'));
}

/*
int main()
{
	char c;
	printf("Enter a character or number: ");
	scanf("%c", &c);
	if(ft_isalnum(c))
	{
		printf("this is alphanumeric");
	}
	else
		printf("this is not alphanumberic");
	
}
*/
