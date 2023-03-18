/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jamendoe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/13 13:27:41 by jamendoe          #+#    #+#             */
/*   Updated: 2022/11/13 13:27:45 by jamendoe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void*))
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
/*
Function name 			ft_lstclear
Prototype 				void ft_lstclear(t_list **lst, void (*del)(void*));
Turn in files 			-
Parameters 				lst: The address of a pointer to a node.
						del: The address of the function used to delete
						the content of the node.
Return value 			None
External functs. 		free
Description 			Deletes and frees the given node and every
						successor of that node, using the function ’del’
						and free(3).
						Finally, the pointer to the list must be set to
						NULL.
*/