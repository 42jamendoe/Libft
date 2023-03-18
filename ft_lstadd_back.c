/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jamendoe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/13 13:26:52 by jamendoe          #+#    #+#             */
/*   Updated: 2022/11/13 13:26:56 by jamendoe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
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
/*
Function name 			ft_lstadd_back
Prototype 				void ft_lstadd_back(t_list **lst, t_list *new);
Turn in files 			-
Parameters 				lst: The address of a pointer to the first link of
						a list.
						new: The address of a pointer to the node to be
						added to the list.
Return value			None
External functs.		None
Description				Adds the node ’new’ at the end of the list.
*/