/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jamendoe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/12 18:23:22 by jamendoe          #+#    #+#             */
/*   Updated: 2022/11/12 18:23:26 by jamendoe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	ft_putendl_fd(char *s, int fd)
{
	int	i;

	i = 0;
	if (!s)
		return ((void) NULL);
	while (s[i])
		i++;
	write (fd, s, i);
	write (fd, "\n", 1);
}
/*
Function name 			ft_putendl_fd
Prototype 				void ft_putendl_fd(char *s, int fd);
Turn in files 			-
Parameters 				s: The string to output.
						fd: The file descriptor on which to write.
Return value 			None
External functs. 		write
Description 			Outputs the string ’s’ to the given file descriptor
						followed by a newline.
*/