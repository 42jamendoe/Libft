/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jamendoe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/12 18:22:08 by jamendoe          #+#    #+#             */
/*   Updated: 2022/11/12 18:22:13 by jamendoe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	size_t		i;
	char		*destptr;
	const char	*srcptr;

	destptr = dest;
	srcptr = src;
	i = 0;
	if (!destptr && !srcptr)
		return (NULL);
	if (dest <= src)
	{
		while (n > 0)
		{
			destptr[i] = srcptr[i];
			i++;
			n--;
		}
		return (dest);
	}
	while (n--)
		destptr[n] = srcptr[n];
	return (dest);
}
/*
memmove - copy memory area
The memmove() function copies n bytes from memory area src to
memory area dest.  The memory areas may overlap: copying takes
place as though the bytes in src are first copied into a
temporary array that does not overlap src or dest, and the bytes
are then copied from the temporary array to dest.
The memmove() function returns a pointer to dest.
*/