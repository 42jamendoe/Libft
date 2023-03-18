/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jamendoe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/02 18:37:50 by jamendoe          #+#    #+#             */
/*   Updated: 2022/11/02 18:37:52 by jamendoe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	*p;

	p = (unsigned char *)s;
	i = 0;
	while (n > 0)
	{
		p[i] = c ;
		i++;
		n--;
	}
	return (s);
}
/*
memset - fill memory with a constant byte
The memset() function fills the first n bytes of the memory
area pointed to by s with the constant byte c
The memset() function returns a pointer to the memory
area s.
*/