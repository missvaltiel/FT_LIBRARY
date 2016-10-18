/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: karvin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/10/18 12:07:08 by karvin            #+#    #+#             */
/*   Updated: 2016/10/18 12:15:39 by karvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list		*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem))
{
	t_list		*newl;
	t_list		*newe;
	t_list		*prel;

	newl = NULL;
	if (lst && (*f))
	{
		newl = (*f)(lst);
		prel = newl;
		lst = lst->next;
		while (lst)
		{
			newe = (*f)(lst);
			prel->next = newe;
			prel = newe;
			lst = lst->next;
		}
		prel->next = NULL;
	}
	return (newl);
}
