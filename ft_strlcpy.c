/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jamendoe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/02 18:38:41 by jamendoe          #+#    #+#             */
/*   Updated: 2022/11/02 18:38:42 by jamendoe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	i;

	i = 0;
	if (size > 0)
	{
		while (i + 1 < size && src[i] != '\0')
		{
			dst[i] = src[i];
			i++;
		}
			dst[i] = '\0';
	}
	while (src[i] != '\0')
		i++;
	return (i);
}
/*
The strlcpy() function copy string. It's are designed to be safer,
more consistent, and less error prone replacements for strncpy(3).
Unlike that function, strlcpy() take the full size of the buffer
(not just the length) and guarantee to NUL-terminate the result,
as long as size is larger than 0.
Note that a byte for the NUL should be included in size.
Also note that strlcpy() only operate on true ''C'' strings.
This means that for strlcpy() src must be NUL-terminated.
The strlcpy() function copies up to size - 1 characters from
the NUL-terminated string src to dst, NUL-terminating the result.

The strlcpy() function return the total length of the string
they tried to create. For strlcpy() that means the length of src.
While this may seem somewhat confusing,
it was done to make truncation detection simple.

Copy string src to buffer dst of size size.  At most dsize-1
hars will be copied.  Always NUL terminates (unless dsize == 0).
Returns strlen(src); if retval >= dsize, truncation occurred.
*/