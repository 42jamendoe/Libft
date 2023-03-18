/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jamendoe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/02 18:41:41 by jamendoe          #+#    #+#             */
/*   Updated: 2022/11/02 18:41:43 by jamendoe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strdup(const char *s)
{
	char	*sc;
	size_t	i;
	size_t	j;

	i = 0;
	while (s[i])
		i++;
	sc = (char *)malloc(sizeof(*s) * i + 1);
	if (!sc)
		return (NULL);
	j = 0;
	while (j < i)
	{
		sc[j] = s[j];
		j++;
	}
	sc[j] = '\0';
	return (sc);
}
/*
The  strdup() function returns a pointer to a new string which is a du‐
plicate of the string s.  Memory for the new string  is  obtained  with
malloc(3), and can be freed with free(3).
On  success,  the strdup() function returns a pointer to the duplicated
string.  It returns NULL if insufficient memory was available, with er‐
rno set to indicate the cause of the error.
*/
