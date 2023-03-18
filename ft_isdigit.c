/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jamendoe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/02 18:36:30 by jamendoe          #+#    #+#             */
/*   Updated: 2022/11/02 18:36:34 by jamendoe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
int	ft_isdigit(int c)
{
	return (c >= '0' && c <= '9');
}
/*
ft_isdigit checks for a digit (0 through 9)
The values returned are nonzero if the character c falls into the
tested class, and zero if not
*/