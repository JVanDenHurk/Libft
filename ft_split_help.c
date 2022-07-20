/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jvan-den <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/13 10:56:51 by jvan-den          #+#    #+#             */
/*   Updated: 2022/07/20 10:38:28 by jvan-den         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_word_count(char const *s, char delim)
{
	size_t i;
	size_t count;

	i = 0;
	count = 0;
	while (s[i] != delim)
	{
		if (s[i] == delim)
		{
			count++;
		}
		i++;
	}
	return(count);
}

char	**ft_split(char const *s, char c)
{

}
