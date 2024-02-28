/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpechinn <vpechinn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/30 15:43:39 by vpechinn          #+#    #+#             */
/*   Updated: 2024/01/30 19:28:37 by vpechinn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*newlist;
	t_list	*ptr;

	if (lst == NULL)
		return (NULL);
	if (!f || !del)
		return (NULL);
	newlist = ft_lstnew(f(lst->content));
	lst = lst->next;
	ptr = newlist;
	while (lst)
	{
		newlist->next = ft_lstnew(f(lst->content));
		if (!newlist->content)
		{
			ft_lstclear(&ptr, del);
			return (0);
		}
		newlist = newlist->next;
		lst = lst->next;
	}
	newlist->next = NULL;
	return (ptr);
}
