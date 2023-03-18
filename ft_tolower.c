/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jamendoe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/02 18:39:28 by jamendoe          #+#    #+#             */
/*   Updated: 2022/11/02 18:39:29 by jamendoe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
int	ft_tolower(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (c += 32);
	else
		return (c);
}
/*
The tolower() function converts an upper-case letter to the corresponding
lower-case letter.  The argument must be representable as an unsigned
char or the value of EOF.

If the argument is an upper-case letter, the tolower() function returns
the corresponding lower-case letter if there is one; otherwise, the
argument is returned unchanged.
*/