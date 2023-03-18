/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jamendoe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/13 13:25:55 by jamendoe          #+#    #+#             */
/*   Updated: 2022/11/13 13:25:56 by jamendoe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	if (!lst || !new)
		return ((void) NULL);
	new->next = *lst;
	*lst = new;
	return ((void) NULL);
}
/*
Function name           ft_lstadd_front
Prototype               void ft_lstadd_front(t_list **lst, t_list *new);
Turn in files           -
Parameters              lst: The address of a pointer to the first link of
						a list.
						new: The address of a pointer to the node to be
						added to the list.
Return value            None
External functs.        None
Description             Adds the node ’new’ at the beginning of the list.
*/