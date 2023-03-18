/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jamendoe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/13 13:26:38 by jamendoe          #+#    #+#             */
/*   Updated: 2022/11/13 13:26:40 by jamendoe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	if (lst == NULL)
		return (NULL);
	while (lst->next != NULL)
	{
		lst = lst->next;
	}
	return (lst);
}
/*
Function name           ft_lstlast
Prototype               t_list *ft_lstlast(t_list *lst);
Turn in files           -
Parameters              lst: The beginning of the list.
Return value            Last node of the list
External functs.        None
Description             Returns the last node of the list.
*/