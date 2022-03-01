/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xel <xel@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/01 16:11:46 by xel               #+#    #+#             */
/*   Updated: 2022/03/01 16:30:43 by xel              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t	index;
	size_t	dest_size;
	size_t	src_size;

	dest_size = ft_strlen(dest);
	src_size = ft_strlen(src);
	if (size <= dest_size || !size)
		return (src_size + size);
	index = 0;
	while (index < (size - 1))
	{
		dest[index] = src[index];
		index++;
	}
	dest[index] = '\0';
	return (dest_size + src_size);
}
