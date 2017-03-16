/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jnederlo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/12 12:07:38 by jnederlo          #+#    #+#             */
/*   Updated: 2017/03/12 17:31:46 by jnederlo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	count_digits(int n)
{
	int	i;

	if (n == -2147483648)
		i = 0;
	else if (n == 0)
		i = 1;
	else
		i = 0;
	while (n != 0)
	{
		n /= 10;
		i++;
	}
	return (i);
}

char		*ft_itoa(int n)
{
	char			*p;
	unsigned int	nb;
	size_t			length;

	length = count_digits(n);
	nb = n;
	if (n < 0)
	{
		nb = -n;
		length++;
	}
	p = ft_strnew(length);
	if (!p)
		return (0);
	p += length;
	if (nb == 0)
		*--p = '0';
	while (nb != 0)
	{
		*--p = nb % 10 + 48;
		nb /= 10;
	}
	if (n < 0)
		*--p = '-';
	return (p);
}
