/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jnederlo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/11 14:05:44 by jnederlo          #+#    #+#             */
/*   Updated: 2017/03/15 19:12:46 by jnederlo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s)
{
	char	*str;
	size_t	i;
	char	*ptr;
	char	*str1;

	if (!s)
		return (0);
	while (*s == ' ' || *s == '\n' || *s == '\t')
		s++;
	ptr = (char *)s;
	i = 1;
	if (*s == '\0')
		return ((char *)s);
	while (i++ < (ft_strlen((char *)ptr)))
		s++;
	while (*s == ' ' || *s == '\n' || *s == '\t')
	{
		s--;
		i--;
	}
	if (!(str = ft_strnew(i - 1)))
		return (0);
	str1 = str;
	str = ft_strncpy(str, ptr, i - 1);
	return (str1);
}
