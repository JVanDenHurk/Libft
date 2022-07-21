/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: justin <justin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/08 10:39:13 by jvan-den          #+#    #+#             */
/*   Updated: 2022/07/21 21:41:30 by justin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//removes set characters from string

#include "libft.h"

static int	match(char c, const char *set)
{
	int	i;

	i = 0;
	while (set[i])
	{
		if (c == set[i])
			return (1);
		i++;
	}
	return (0);
}

char	*ft_strtrim(const char *s1, const char *set)
{
	int		front;
	int		back;
	int		i;
	char	*result;

	if (!(s1 || set))
		return ((char *)s1);
	front = 0;
	while (s1[front] && match(s1[front], set))
		front++;
	back = ft_strlen(s1);
	while (back > front && match(s1[back - 1], set))
		back--;
	result = malloc((back - front + 1) * sizeof(*result));
	if (!result)
		return (NULL);
	i = 0;
	while (front < back)
		result [i++] = s1[front++];
	result[i] = '\0';
	return (&result[0]);
}