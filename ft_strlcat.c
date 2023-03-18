/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jamendoe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/02 18:38:54 by jamendoe          #+#    #+#             */
/*   Updated: 2022/11/02 18:38:55 by jamendoe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

static size_t	strleni(char const *s)
{
	size_t	i;

	i = 0;
	while (s[i] != '\0')
		i++;
	return (i);
}

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	lensrc;
	size_t	lendst;
	size_t	i;

	lensrc = 0;
	lendst = 0;
	i = 0;
	if (!dst && size == 0)
		return (0);
	lensrc = strleni (src);
	lendst = strleni (dst);
	if (lendst >= size || size == 0)
		return (size + lensrc);
	while (i < (size - lendst - 1) && src[i] != '\0')
	{
		dst[lendst + i] = src[i];
		i++;
	}
	dst[lendst + i] = '\0';
	return (lendst + lensrc);
}
/*
The strlcat() function concatenate strings. It's designed to be safer,
more consistent, and less error prone replacements for strncat(3).
Unlike that function, strlcat() take the full size of the buffer
(not just the length) and guarantee to NUL-terminate the result,
as long as there is at least one byte free in dst.
Note that a byte for the NUL should be included in size.
Also note that and strlcat() only operate on true ''C'' strings.
This means that for strlcat() both src and dst must be NUL-terminated.
The strlcat() function appends the NUL-terminated
string src to the end of dst.
It will append at most size - strlen(dst) - 1 bytes,
NUL-terminating the result.

The strlcat() functions return the total length of
the string they tried to create.
For strlcat() that means the initial length of dst plus the length of src.
While this may seem somewhat confusing,
it was done to make truncation detection simple.

Note, however, that if strlcat() traverses size characters without
finding a NUL, the length of the string is considered to be size
and the destination string will not be NUL-terminated
(since there was no space for the NUL). This keeps strlcat() from
running off the end of a string. In practice this should not happen
(as it means that either size is incorrect or that dst
is not a proper ''C'' string). The check exists to prevent
potential security problems in incorrect code.
*/
