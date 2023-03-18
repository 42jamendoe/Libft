/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jamendoe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/13 13:27:24 by jamendoe          #+#    #+#             */
/*   Updated: 2022/11/13 13:27:29 by jamendoe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	ft_lstdelone(t_list *lst, void (*del)(void*))
{
	if (!lst || !del)
		return ((void) NULL);
	del(lst->content);
	free(lst);
}
/*
Function name 			ft_lstdelone
Prototype 				void ft_lstdelone(t_list *lst, void (*del)(void*));
Turn in files 			-
Parameters 				lst: The node to free.
						del: The address of the function used to delete
						the content.
Return value 			None
External functs. 		free
Description 			Takes as a parameter a node and frees the memory of
						the node’s content using the function ’del’ given
						as a parameter and free the node. The memory of
						’next’ must not be freed.
*/