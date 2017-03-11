/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jnederlo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/06 16:55:45 by jnederlo          #+#    #+#             */
/*   Updated: 2017/03/06 17:48:23 by jnederlo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	int	i;
	int	k;

	//if (!ft_strlen(src) || !ft_strlen(dst))
	//	return(0);
	
	i = 0;
	k = 0;
	while (dst[i])
		i++;
	while ((sizeof(char) - 1) * dst <= sizeof(char) * size)
	{
		dst[i] = src[k];
		i++;
		k++;
	}
	dst[i] = 0;
	return (ft_strlen(dst));
}

