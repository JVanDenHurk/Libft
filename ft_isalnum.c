/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: justin <justin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/29 19:02:47 by justin            #+#    #+#             */
/*   Updated: 2022/06/29 19:10:12 by justin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int ft_isalnum(int c)
{
    return((c >= 0 && c <= 9) || (c >= 'a' && c <= 'z') || ( c >= 'A' && c <= 'Z'));
}