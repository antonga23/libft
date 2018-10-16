/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdel.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antonga <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/02 09:25:08 by antonga           #+#    #+#             */
/*   Updated: 2018/08/02 09:25:13 by antonga          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstdel(t_list **alst, void (*del)(void *, size_t))
{
	t_list	*list;
	t_list	*list_next;

	list = *alst;
	while (list)
	{
		list_next = list->next;
		del(list->content, list->content_size);
		free(list);
		list = list_next;
	}
	*alst = NULL;
}
