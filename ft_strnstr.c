/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xel <xel@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/01 16:11:57 by xel               #+#    #+#             */
/*   Updated: 2022/03/02 16:54:02 by xel              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *s1, const char *s2, size_t len)
{
	size_t			n;
	size_t			k;

	n = 0;
	if (!*s2 || !s2)
		return ((char *)s1);
	while (s1[n] && (n < len))
	{
		k = 0;
		while ((s1[n + k] == s2[k] && ((n + k) < len)))
		{
			if (s2[k + 1] == '\0')
				return ((char *)&s1[n]);
			k++;
		}
		n++;
	}
	return (NULL);
}
