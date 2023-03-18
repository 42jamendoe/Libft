/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jamendoe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/02 18:39:54 by jamendoe          #+#    #+#             */
/*   Updated: 2022/11/02 18:39:55 by jamendoe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	*save;

	save = NULL;
	while (*s)
	{
		if (*s == (char) c)
			save = (char *)s;
		s++;
	}
	if (*s == (char) c)
		return ((char *)s);
	else
		return (save);
}
/*
The strrchr() function is identical to strchr(), except it locates the
last occurrence of c.

The function and strrchr() return a pointer to the located
character, or NULL if the character does not appear in the string.
*/