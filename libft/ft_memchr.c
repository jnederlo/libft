/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jnederlo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/09 15:50:11 by jnederlo          #+#    #+#             */
/*   Updated: 2017/03/09 16:50:26 by jnederlo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	const unsigned char *string;

	string = (const unsigned char *)s;
	while(n > 0)
	{
		if (*string == (unsigned char)c)
				return ((void *)string);
		string++;
		n--;
	}
	return (NULL);
}
