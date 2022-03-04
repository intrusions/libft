/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xel <xel@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/04 14:49:10 by xel               #+#    #+#             */
/*   Updated: 2022/03/04 18:05:47 by xel              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_isset(char c, const char *set)
{
	int	i;

	i = 0;
	while (set[i])
	{
		if (set[i] == c)
			return (1);
		i++;
	}
	return (0);
}

static int	ft_start(const char *s1, const char *set)
{
	int	i;

	i = 0;
	while (ft_isset(s1[i], set))
		i++;
	return (i);
}

static int	ft_end(const char *s1, const char *set)
{
	int	i;

	i = ft_strlen(s1) - 1;
	while (ft_isset(s1[i], set))
		i--;
	return ((ft_strlen(s1) - (i + 1)));
}

char	*ft_strtrim(const char *s1, const char *set)
{
	size_t	i;
	size_t	j;
	size_t	diff;
	char	*dest;

	i = 0;
	j = 0;
	diff = ft_start(s1, set) + ft_end(s1, set);
	if (diff == (ft_strlen(s1) * 2))
		diff = ft_strlen(s1);
	dest = malloc(sizeof(char) * ((ft_strlen(s1) - diff) + 1));
	if (!dest)
		return (NULL);
	while (ft_isset(s1[i], set))
		i++;
	while (i < (ft_strlen(s1) - ft_end(s1, set)))
	{
		dest[j] = s1[i];
		j++;
		i++;
	}
	dest[j] = '\0';
	return (dest);
}
