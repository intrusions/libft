/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xel <xel@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/01 16:11:31 by xel               #+#    #+#             */
/*   Updated: 2022/03/02 01:35:29 by xel              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	size_t	i;
	void	*tmp;

	i = 0;
	while (i < n)
	{
		(*(unsigned char *)(tmp + i)) = (*(unsigned char *)(src + i));
		i++;
	}
	i = 0;
	while (i < n)
	{
		(*(unsigned char *)(dest + i)) = (*(unsigned char *)(tmp + i));
		i++;
	}
	return ((unsigned char *)dest);
}
