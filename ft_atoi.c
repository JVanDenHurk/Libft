/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jvan-den <jvan-den@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/05 18:41:03 by justin            #+#    #+#             */
/*   Updated: 2022/07/08 15:12:00 by jvan-den         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//converts string into int unless it's a number,
// space, '+' or '-' then it will return 0.

#include "libft.h"

int	ft_atoi(const char *str)
{
	int	r;
	int	n;
	int	i;

	r = 0;
	n = 0;
	i = 0;
	while (str[i] == ' ' || (str[i] >= 9 && str[i] <= 13))
		i++;
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			n = 1;
		i++;
	}
	while (ft_isdigit(str[i]))
	{
		r = r * 10 + (str[i] - '0');
		i++;
	}
	if (n)
		return (-r);
	return (r);
}
