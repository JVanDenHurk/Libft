/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: justin <justin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/29 18:10:47 by justin            #+#    #+#             */
/*   Updated: 2022/07/27 15:53:28 by jvan-den         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// returns alphabet from the ascii table.

#include "libft.h"

int	ft_isalpha(int c)
{
	return ((c >= 'A' && c <= 'Z')
		|| (c >= 'a' && c <= 'z'));
}
/*
int main()
{
	//force test int
	//int n = 1;
	char c;

	printf("Enter a character: ");
	scanf("%c", &c);

	if(ft_isalpha(c))
		printf("This is part of the alphabet");
	else
		printf("This is not part of the alphabet");
}
*/
