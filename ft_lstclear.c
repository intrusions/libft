/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xel <xel@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/02 00:26:50 by xel               #+#    #+#             */
/*   Updated: 2022/03/02 16:24:47 by xel              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*curr;

	curr = *lst;
	while (curr)
	{
		curr = (*lst)->next;
		del((*lst)->content);
		free(*lst);
	}
}
