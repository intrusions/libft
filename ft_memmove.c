/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xel <xel@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/01 16:11:31 by xel               #+#    #+#             */
/*   Updated: 2022/03/05 17:39:15 by xel              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	char		*d;
	const char	*s;

	d = dest;
	s = src;
	if (dest < src)
		ft_memcpy(dest, src, n);
	else
	{
		s += (n - 1);
		d += (n - 1);
		while (n > 0)
		{
			*d = *s;
			d--;
			s--;
			n--;
		}
	}
	return (dest);
}
