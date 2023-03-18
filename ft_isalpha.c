/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jamendoe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/02 18:32:00 by jamendoe          #+#    #+#             */
/*   Updated: 2022/11/02 18:34:07 by jamendoe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
int	ft_isalpha(int c)
{
	return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}
/*
ft_isalpha checks for an alphabetic character; in the standard "C"
locale, it is equivalent to (isupper(c) || islower(c)).
The values returned are nonzero if the character c falls into the
tested class, and zero if not
*/