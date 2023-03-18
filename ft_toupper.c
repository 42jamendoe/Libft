/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jamendoe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/02 18:39:10 by jamendoe          #+#    #+#             */
/*   Updated: 2022/11/02 18:39:16 by jamendoe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
int	ft_toupper(int c)
{
	if (c >= 'a' && c <= 'z')
		return (c -= 32);
	else
		return (c);
}
/*
The toupper() function converts a lower-case letter to the corresponding
upper-case letter.  The argument must be representable as an unsigned
char or the value of EOF.

If the argument is a lower-case letter, the toupper() function returns
the corresponding upper-case letter if there is one; otherwise, the
argument is returned unchanged.
*/