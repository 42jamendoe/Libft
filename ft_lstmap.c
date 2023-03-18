/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jamendoe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/13 13:28:23 by jamendoe          #+#    #+#             */
/*   Updated: 2022/11/13 13:28:24 by jamendoe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

static t_list	*ft_lstnewitem(void *content)
{
	t_list	*new;

	new = NULL;
	new = (t_list *)malloc(sizeof(t_list));
	if (!new)
		return (NULL);
	new->content = content;
	new->next = NULL;
	return (new);
}

static void	ft_lstclearitem(t_list **lst, void (*del)(void*))
{
	t_list	*clear;

	if (!lst || !del)
		return ((void) NULL);
	clear = (*lst);
	while (clear != NULL)
	{
		clear = clear->next;
		del((*lst)->content);
		free(*lst);
		(*lst) = clear;
	}
}

static void	ft_lstadd_backitem(t_list **lst, t_list *new)
{
	t_list	*addback;

	addback = *lst;
	if (!new)
		(*lst) = NULL;
	else if (!(*lst))
		(*lst) = new;
	else
	{
		while (addback->next)
			addback = addback->next;
		addback->next = new;
	}
}

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*newlist;
	t_list	*listitem;

	if (!lst || !f || !del)
		return (NULL);
	newlist = ft_lstnewitem(f(lst->content));
	if (newlist == NULL)
		return (NULL);
	lst = lst->next;
	while (lst != NULL)
	{
		listitem = ft_lstnewitem(f(lst->content));
		if (listitem == NULL)
		{
			ft_lstclearitem(&newlist, del);
			return (NULL);
		}
		ft_lstadd_backitem(&newlist, listitem);
		lst = lst->next;
	}
	return (newlist);
}
/*
Function name           ft_lstmap
Prototype               t_list *ft_lstmap(t_list *lst, void *(*f)(void *),
						 void (*del)(void *));
Turn in files           -
Parameters l            st: The address of a pointer to a node.
						f: The address of the function used to iterate on
						the list.
						del: The address of the function used to delete
						the content of a node if needed.
Return value            The new list.
						NULL if the allocation fails.
External functs.        malloc, free
Description             Iterates the list ’lst’ and applies the function
						’f’ on the content of each node. Creates a new
						list resulting of the successive applications of
						the function ’f’. The ’del’ function is used to
						delete the content of a node if needed.
*/