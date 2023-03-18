/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jamendoe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/12 18:26:53 by jamendoe          #+#    #+#             */
/*   Updated: 2022/11/12 18:26:55 by jamendoe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

static size_t	ft_strlen_all(const char *s1)
{
	size_t	i;

	i = 0;
	while (s1[i] != '\0')
		i++;
	return (i);
}

static size_t	ft_c_is_on_set(char c, const char *set)
{
	size_t	i;

	i = 0;
	while (set[i] != '\0')
	{
		if (set[i] == c)
			return (1);
		else
			i++;
	}
	return (0);
}

static size_t	ft_search_start(const char *start, const char *set)
{
	size_t	i;

	i = 0;
	while (start[i] != '\0' && ft_c_is_on_set(start[i], set) == 1)
	{
		i++;
	}
	return (i);
}

static size_t	ft_search_end(const char *end, const char *set)
{
	size_t	i;

	i = ft_strlen_all(end) - 1;
	while (i > 0 && ft_c_is_on_set(end[i], set) == 1)
	{
		i--;
	}
	if (i == 0)
		i = ft_strlen_all(end);
	return (i);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	i;
	size_t	j;
	size_t	m;
	char	*st;

	if (!s1 || !set)
		return (NULL);
	i = ft_search_start(s1, set);
	j = ft_search_end(s1, set) + 1;
	st = malloc(sizeof(*s1) * (j - i) + 1);
	if (!st)
		return (NULL);
	m = 0;
	while (i < j)
	{
		st[m] = s1[i];
		m++;
		i++;
	}
	st[m] = '\0';
	return (st);
}
/*
Function name		ft_strtrim
Prototype 			char *ft_strtrim(char const *s1, char const *set);
Turn in files 		-
Parameters 			s1: The string to be trimmed.
					set: The reference set of characters to trim.
Return value		The trimmed string.
					NULL if the allocation fails.
External functs. 	malloc
Description 		Allocates (with malloc(3)) and returns a copy of
					’s1’ with the characters specified in ’set’ removed
					from the beginning and the end of the string.
*/
