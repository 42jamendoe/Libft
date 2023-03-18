/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jamendoe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/02 18:37:09 by jamendoe          #+#    #+#             */
/*   Updated: 2022/11/02 18:37:11 by jamendoe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
int	ft_isascii(int c)
{
	return (c >= 0 && c < 128);
}
/*
ft_isascii checks whether c is a 7-bit unsigned char value that fits 
into the ASCII character set.
The values returned are nonzero if the character c falls into the
tested class, and zero if not
*/