/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jamendoe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/02 18:36:49 by jamendoe          #+#    #+#             */
/*   Updated: 2022/11/02 18:36:52 by jamendoe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
int	ft_isalnum(int c)
{
	return ((c >= 'a' && c <= 'z') || \
	(c >= 'A' && c <= 'Z') || \
	(c >= '0' && c <= '9'));
}
/*
ft_isalnum checks for an alphanumeric character; it is equivalent to
(isalpha(c) || isdigit(c)).
The values returned are nonzero if the character c falls into the
tested class, and zero if not
*/