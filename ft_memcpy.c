/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jamendoe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/02 18:38:18 by jamendoe          #+#    #+#             */
/*   Updated: 2022/11/02 18:38:19 by jamendoe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t		i;
	char		*destptr;
	const char	*srcptr;

	destptr = dest;
	srcptr = src;
	i = 0;
	if (!destptr && !srcptr)
		return (NULL);
	while (n > 0)
	{
		destptr[i] = srcptr[i];
		i++;
		n--;
	}
	return (dest);
}
/*
memcpy - copy memory area
The memcpy() function copies n bytes from memory area src to
memory area dest.  The memory areas must not overlap.  Use
memmove(3) if the memory areas do overlap.
The memcpy() function returns a pointer to dest.
*/