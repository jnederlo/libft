/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jnederlo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/13 15:21:05 by jnederlo          #+#    #+#             */
/*   Updated: 2017/03/15 16:29:53 by jnederlo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void const *content, size_t content_size)
{
	t_list	*newlink;

	newlink = (t_list *)malloc(sizeof(t_list));
	if (!newlink)
		return (0);
	if (!content)
	{
		newlink->content = 0;
		newlink->content_size = 0;
	}
	else
	{
		newlink->content = malloc(content_size);
		if (!newlink->content)
			return (0);
		newlink->content = ft_memcpy(newlink->content, content, content_size);
		newlink->content_size = content_size;
	}
	newlink->next = NULL;
	return (newlink);
}
