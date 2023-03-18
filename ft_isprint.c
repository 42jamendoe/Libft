/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jamendoe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/02 18:37:24 by jamendoe          #+#    #+#             */
/*   Updated: 2022/11/02 18:37:26 by jamendoe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
int	ft_isprint(int c)
{
	return (c >= 32 && c < 127);
}
/*
ft_isprint checks for any printable character including space.
The values returned are nonzero if the character c falls into the
tested class, and zero if not
*/