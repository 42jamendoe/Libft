/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jamendoe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/02 18:40:55 by jamendoe          #+#    #+#             */
/*   Updated: 2022/11/17 20:57:56 by jamendoe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
int	ft_atoi(const char *nptr)
{
	int				sign;
	int				value;
	unsigned char	*nptrp;

	nptrp = (unsigned char *) nptr;
	value = 0;
	sign = 1;
	while ((*nptrp >= 9 && *nptrp <= 13) || (*nptrp == 32))
			nptrp++;
	if (*nptrp == 45 || *nptrp == 43)
	{
		if (*nptrp == 45)
			sign *= -1;
		nptrp++;
	}
	while (*nptrp >= 48 && *nptrp <= 57)
	{
		value *= 10;
		value += *nptrp - 48;
		nptrp++;
	}
	return (value * sign);
}
/*
The  atoi() function converts the initial portion of the string pointed
to by nptr to int.  The behavior is the same as
strtol(nptr, NULL, 10);
except that atoi() does not detect errors.

The atol() and atoll() functions behave the same as atoi(), except that
they  convert the initial portion of the string to their return type of
long or long long.
atoi() return the converted value.
*/
