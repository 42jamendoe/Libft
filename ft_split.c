/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jamendoe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/12 18:24:20 by jamendoe          #+#    #+#             */
/*   Updated: 2022/11/12 18:24:22 by jamendoe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

static int	occ_char_c(char const *s, char c)
{
	char	last;
	size_t	i;
	size_t	n;

	last = c;
	i = 0;
	n = 0;
	while (s[i] != '\0')
	{
		if (last == c && s[i] != c)
			n++;
		last = s[i];
		i++;
	}
	return (n);
}

static size_t	strlentoc(const char *s, char c)
{
	size_t	i;

	i = 0;
	while (s[i] != '\0' && s[i] != c)
		i++;
	return (i);
}

static char	*mem_word_i(char *sps_i, const char *s_i, size_t size)
{
	size_t	i;

	i = 0;
	if (!sps_i && !s_i)
		return (NULL);
	while (size > 0)
	{
		sps_i[i] = s_i[i];
		i++;
		size--;
	}
	sps_i[i] = '\0';
	return (sps_i);
}

static char	**sp_word(char **sps, const char *s, const char c)
{
	size_t	i;
	size_t	j;

	i = 0;
	while (*s)
	{
		while (*s && *s == c)
			s++;
		if (*s)
		{
			j = strlentoc (s, c);
			sps[i] = (char *) malloc((j + 1) * sizeof(char));
			if (!sps[i])
				return (NULL);
			mem_word_i(sps[i], s, (size_t)j);
			s += j;
			i++;
		}
	}
	sps[i] = NULL;
	return (sps);
}

char	**ft_split(char const *s, char c)
{
	char	**sps;

	if (!s)
		return (NULL);
	sps = (char **) malloc((occ_char_c(s, c) + 1) * sizeof(*sps));
	if (!sps)
		return (NULL);
	sp_word(sps, s, c);
	return (sps);
}
/*
Function name       ft_split
Prototype           char **ft_split(char const *s, char c);
Turn in files       -
Parameters          s: The string to be split.
                    c: The delimiter character.
Return value        The array of new strings resulting from the split.
                    NULL if the allocation fails.
External functs.    malloc, free
Description         Allocates (with malloc(3)) and returns an array
                    of strings obtained by splitting ’s’ using the
                    character ’c’ as a delimiter. The array must end
                    with a NULL pointer.
*/