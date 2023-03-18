/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jamendoe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/02 18:40:33 by jamendoe          #+#    #+#             */
/*   Updated: 2022/11/02 18:40:34 by jamendoe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	const unsigned char	*s1p;
	const unsigned char	*s2p;

	s1p = (unsigned char *) s1;
	s2p = (unsigned char *) s2;
	while (n != 0)
	{
		if (*s1p == *s2p)
		{
			s1p++;
			s2p++;
			n--;
		}
		else
			return (*s1p - *s2p);
	}
	return (0);
}
/*
	 The memcmp() function compares byte string s1 against byte string s2.
	 Both strings are assumed to be n bytes long.
	 The memcmp() function returns zero if the two strings are identical,
	 otherwise returns the difference between the first two differing bytes
	 (treated as unsigned char values, so that ‘\200’ is greater than ‘\0’,
	 for example).  Zero-length strings are always identical.  This behavior
	 is not required by C and portable code should only depend on the sign of
	 the returned value.
*/
