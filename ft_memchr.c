/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jamendoe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/02 18:40:21 by jamendoe          #+#    #+#             */
/*   Updated: 2022/11/02 18:40:21 by jamendoe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	while (n > 0)
	{
		if (*(unsigned char *) s == (unsigned char) c)
		{
			return ((void *)s);
		}
		s++;
		n--;
	}
	return (NULL);
}
/*
The memchr() function locates the first occurrence of c (converted to an
unsigned char) in string s.
The memchr() function returns a pointer to the byte located, or NULL if
no such byte exists within n bytes.
*/