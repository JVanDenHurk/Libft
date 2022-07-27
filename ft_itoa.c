/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: justin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/21 21:46:15 by justin            #+#    #+#             */
/*   Updated: 2022/07/21 21:47:46 by justin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//converts int into ascii

#include "libft.h"

//counts the digits in the int number
static int	countdigits(long int n)
{
	unsigned int	count;

	count = 0;
	if (n < 0)
	{
		count++;
		n *= -1;
	}
	while (n)
	{
		count++;
		n /= 10;
	}
	return (count);
}

char	*ft_itoa(int n)
{
	long int		num;
	int				sign;
	char			*result;
	unsigned int	digits;

	num = n;
	sign = 0;
	digits = countdigits(num);
	if (num < 0)
	{
		num *= -1;
		sign = -1;
	}
	result = ft_calloc((digits + 1), sizeof(char));
	if (!result)
		return (0);
	result[0] = '-';
	while (digits + sign)
	{
		result[digits - 1] = (num % 10 + '0');
		num /= 10;
		digits--;
	}
	return (result);
}
