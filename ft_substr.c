/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xel <xel@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/01 16:12:02 by xel               #+#    #+#             */
/*   Updated: 2022/03/01 16:32:31 by xel              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*dest;
	size_t	i;

	i = 0;
	dest = NULL;
	if (s)
	{
		dest = malloc(sizeof(char) * (len + 1));
		if (!dest)
			return (NULL);
		while (i < len)
		{
			dest[i] = s[start];
			i++;
			start++;
		}
		dest[i] = '\0';
	}
	return (dest);
}
