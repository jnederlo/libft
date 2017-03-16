/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jnederlo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/12 17:59:57 by jnederlo          #+#    #+#             */
/*   Updated: 2017/03/13 13:36:13 by jnederlo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	count_words(const char *s, char c)
{
	int	j;

	j = 0;
	while (*s)
	{
		while (*s == c)
			s++;
		if (*s != c && *s)
			j++;
		while (*s != c && *s)
			s++;
	}
	return (j);
}

static char	*word_copy(const char *s, char c)
{
	int		j;
	char	*start;

	j = 0;
	while (*s)
	{
		while (*s && *s == c)
			s++;
		if (*s != c && *s)
			start = (char *)s;
		while (*s != c && *s)
		{
			s++;
			j++;
		}
		start = ft_strnew(j);
		start = ft_strncpy(start, (char *)s - j, j);
		return (start);
	}
	return (0);
}

static char	*next_word(const char *s, char c)
{
	char	*start;
	int		j;

	j = 0;
	while (*s)
	{
		while (*s && *s == c)
			s++;
		if (*s != c && *s)
			start = (char *)s;
		while (*s != c && *s)
		{
			s++;
			j++;
		}
		return ((char *)s);
	}
	return (0);
}

char		**ft_strsplit(char const *s, char c)
{
	char	**word;
	int		num_words;
	int		i;

	i = 0;
	if (!s)
		return (0);
	num_words = count_words(s, c);
	word = (char **)malloc(num_words * sizeof(char *) + 1);
	if (!word)
		return (0);
	while (num_words > 0)
	{
		*word = word_copy(s, c);
		s = next_word(s, c);
		num_words--;
		word++;
		i++;
	}
	*word = NULL;
	return (word - i);
}
