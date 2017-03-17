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
	size_t	dst_len;

	dst_len = ft_strlen(dst);
	if (size == 0)
		return (0);
	if (size < dst_len + 1)
		return (ft_strlen(src) + size);
	while (*dst)
		dst++;
	while (dst_len++ < (size - 1) && *src)
		*dst++ = *src++;
	*dst++ = 0;
	return (ft_strlen(dst));
}
