/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jamendoe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/12 18:21:26 by jamendoe          #+#    #+#             */
/*   Updated: 2022/11/12 18:21:30 by jamendoe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

static int	ft_digits(int n)
{
	int	dn;

	dn = 1;
	if (n < 0)
		dn++;
	while (n / 10)
	{
		n = n / 10;
		dn++;
	}
	return (dn);
}

static void	ft_write(char *c, int n, int dn)
{
	int	i;

	i = 1;
	if (n < 0)
	{
		if (n == -2147483648)
		{
			c[dn--] = 8 + '0';
			n = 214748364;
		}
		else
			n *= -1;
		c[0] = '-';
	}
	else
		i = 0;
	while (dn >= i)
	{
		c[dn] = n % 10 + 48;
		n = n / 10;
		dn--;
	}
}

char	*ft_itoa(int n)
{
	char	*c;
	int		dn;

	dn = ft_digits(n);
	c = (char *)malloc((dn + 1) * sizeof(*c));
	if (!c)
		return (NULL);
	c[dn--] = '\0';
	ft_write(c, n, dn);
	return (c);
}
/*
Function name       ft_itoa
Prototype           char *ft_itoa(int n);
Turn in files       -
Parameters          n: the integer to convert.
Return value        The string representing the integer.
					NULL if the allocation fails.
External functs.    malloc
Description         Allocates (with malloc(3)) and returns a string
					representing the integer received as an argument.
					Negative numbers must be handled.
*/