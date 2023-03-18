/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jamendoe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/13 13:28:02 by jamendoe          #+#    #+#             */
/*   Updated: 2022/11/13 13:28:03 by jamendoe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	t_list	*iter_and_f;

	if (!lst || !f)
		return ((void) NULL);
	iter_and_f = lst;
	while (iter_and_f != NULL)
	{
		f(iter_and_f->content);
		iter_and_f = iter_and_f->next;
	}
}
/*
Function name 			ft_lstiter
Prototype 				void ft_lstiter(t_list *lst, void (*f)(void *));
Turn in files 			-
Parameters 				lst: The address of a pointer to a node.
						f: The address of the function used to iterate on
						the list.
Return value 			None
External functs. 		None
Description 			Iterates the list ’lst’ and applies the function
						’f’ on the content of each node.
*/