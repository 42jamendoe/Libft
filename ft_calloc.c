/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jamendoe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/02 18:41:07 by jamendoe          #+#    #+#             */
/*   Updated: 2022/11/17 20:58:31 by jamendoe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	void			*p;
	size_t			max;
	unsigned char	*pw;

	max = nmemb * size;
	p = malloc(max);
	if (!p)
		return (NULL);
	pw = (unsigned char *) p;
	while (max > 0)
	{
		*pw = '\0';
		pw++;
		max--;
	}
	return (p);
}
/*
The  calloc()  function allocates memory for an array of nmemb elements
of size bytes each and returns a pointer to the allocated memory.   The
memory  is  set  to zero.  If nmemb or size is 0, then calloc() returns
either NULL, or a unique pointer value that can later  be  successfully
passed to free().  If the multiplication of nmemb and size would result
in integer overflow, then calloc() returns an error.  By  contrast,  an
integer  overflow  would  not be detected in the following call to mal‐
loc(), with the result that an incorrectly sized block of memory  would
be allocated: malloc(nmemb * size);

The  malloc()  and calloc() functions return a pointer to the allocated
memory, which is suitably aligned for any  built-in  type.   On  error,
these functions return NULL.  NULL may also be returned by a successful
call to malloc() with a size of zero, or by a successful call  to  cal‐
loc() with nmemb or size equal to zero.
*/
