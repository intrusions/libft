/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jucheval <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/01 16:12:02 by xel               #+#    #+#             */
/*   Updated: 2022/05/03 14:11:44 by jucheval         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_count(char const *s, unsigned int start, size_t len)
{
	size_t	i;

	i = 0;
	while ((i < len) && s[start] && (start < ft_strlen(s)))
	{
		i++;
		start++;
	}
	return (i);
}

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*dest;
	size_t	i;

	i = 0;
	dest = NULL;
	if (s)
	{
		dest = malloc(sizeof(char) * (ft_count(s, start, len) + 1));
		if (!dest)
			return (NULL);
		while ((i < len) && s[start] && (start < ft_strlen(s)))
		{
			dest[i] = s[start];
			i++;
			start++;
		}
		dest[i] = 0;
	}
	return (dest);
}
