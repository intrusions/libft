/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xel <xel@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/02 00:50:57 by xel               #+#    #+#             */
/*   Updated: 2022/03/02 01:32:12 by xel              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new;
	t_list	*last;
	t_list	*start;
	t_list	*newstart;

	new = 0;
	last = 0;
	start = lst;
	while (lst)
	{
		new = malloc(sizeof(t_list));
		new->content = f(lst->content);
		if (last)
			last->next = new;
		else
			newstart = new;
		if (!lst->next)
			new->next = 0;
		last = new;
		lst = lst->next;
	}
	ft_lstsup(start, del);
	return (newstart);
}
