/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jamendoe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/02 18:40:08 by jamendoe          #+#    #+#             */
/*   Updated: 2022/11/02 18:40:10 by jamendoe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	if (n == 0)
		return (0);
	while (*s1 == *s2 && *s1 && *s2 && n > 1)
	{
		s1++;
		s2++;
		n--;
	}
	return (*(unsigned char *)s1 - *(unsigned char *)s2);
}
/*
The strncmp() function lexicographically compare the null-
terminated strings s1 and s2.
The strncmp() function compares not more than n characters.  Because
strncmp() is designed for comparing strings rather than binary data,
characters that appear after a ‘\0’ character are not compared.
The strncmp() function return an integer greater than,
equal to, or less than 0, according as the string s1 is greater than,
equal to, or less than the string s2.  The comparison is done using
unsigned characters, so that ‘\200’ is greater than ‘\0’.
*/