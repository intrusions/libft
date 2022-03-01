/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xel <xel@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/01 16:10:12 by xel               #+#    #+#             */
/*   Updated: 2022/03/01 16:23:08 by xel              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*dest;

	dest = (void *)malloc(sizeof(size * nmemb));
	if (!dest)
		return (NULL);
	ft_bzero(dest, nmemb);
	return (dest);
}
