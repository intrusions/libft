/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jucheval <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/03 15:20:26 by jucheval          #+#    #+#             */
/*   Updated: 2022/05/03 17:28:23 by jucheval         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_strrlen(const char *s)
{
	size_t	i;

	i = 0;
	if (!s)
		return (0);
	while (s[i])
		i++;
	return (i);
}

static int	ft_count(char const *s, unsigned int start, size_t len)
{
	size_t	i;

	i = 0;
	while ((i < len) && start < ft_strrlen(s) && s[start])
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
		while ((i < len) && (start < ft_strrlen(s)) && (s[start]))
		{
			dest[i] = s[start];
			i++;
			start++;
		}
		dest[i] = 0;
	}
	return (dest);
}
