/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: justin <justin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/17 23:05:02 by justin            #+#    #+#             */
/*   Updated: 2022/06/28 20:45:37 by justin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H
# include <stdlib.h>
# include <unistd.h>
# include <stdio.h>

void	*ft_memset(void *b, int c, size_t length);
size_t  ft_strlen(const char *s);
int	ft_tolower(int c);
int ft_toupper(int c);
void    *ft_memchr(const void *s, int c, size_t n);

#endif