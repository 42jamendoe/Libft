/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jamendoe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/12 18:25:44 by jamendoe          #+#    #+#             */
/*   Updated: 2022/11/12 18:25:46 by jamendoe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	size_t	i;
	size_t	j;
	char	*sp;

	if (!s)
		return (NULL);
	i = 0;
	while (s[i] != '\0')
	{
		i++;
	}
	sp = (char *)malloc((i + 1) * sizeof(*s));
	if (!sp)
		return (NULL);
	j = 0;
	while (j < i)
	{
		sp[j] = f(j, s[j]);
		j++;
	}
	sp[j] = '\0';
	return (sp);
}
/*
Function name 		ft_strmapi
Prototype 			char *ft_strmapi(char const *s, char (*f)(unsigned int, char));
Turn in files 		-
Parameters 			s: The string on which to iterate.
					f: The function to apply to each character.
Return value 		The string created from the successive applications
					of ’f’.
					Returns NULL if the allocation fails.
External functs. 	malloc
Description 		Applies the function ’f’ to each character of the
					string ’s’, and passing its index as first argument
					to create a new string (with malloc(3)) resulting
					from successive applications of ’f’.
*/