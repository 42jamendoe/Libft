/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jamendoe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/12 18:27:16 by jamendoe          #+#    #+#             */
/*   Updated: 2022/11/12 18:27:18 by jamendoe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*sp;
	size_t	strlen;
	size_t	i;
	size_t	j;

	if (!s)
		return (NULL);
	strlen = 0;
	while (s[strlen] != '\0')
		strlen++;
	sp = (char *)malloc(sizeof(*s) * (len + 1));
	if (!sp)
		return (NULL);
	i = 0;
	j = start;
	while (i < len && j < strlen)
	{
		sp[i] = s[j];
		i++;
		j++;
	}
	sp[i] = '\0';
	return (sp);
}
/*Function name:	ft_substr
Prototype:			char *ft_substr(char const *s, unsigned int start, size_t len);
Turn in files: 		-
Parameters:			s: The string from which to create the substring.
					start: The start index of the substring in the string ’s’.
					len: The maximum length of the substring.
Return value:		The substring.
					NULL if the allocation fails.
External functs:	malloc
Description:		Allocates (with malloc(3)) and returns a substring
					from the string ’s’.
					The substring begins at index ’start’ and is of
					maximum size ’len’.*/
