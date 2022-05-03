/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jucheval <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/03 15:16:18 by jucheval          #+#    #+#             */
/*   Updated: 2022/05/03 19:32:33 by jucheval         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*dest;
	int		x;

	x = nmemb * size;
	if (nmemb && ((x / nmemb) != size))
		return (NULL);
	dest = (void *)malloc(size * nmemb);
	if (!dest)
		return (NULL);
	ft_bzero(dest, (size * nmemb));
	return (dest);
}
