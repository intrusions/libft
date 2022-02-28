#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	j;

	j = 0;
	while ((s1[j] || s2[j]) && j < n)
	{
		if (s1[j] != s2[j])
			return (s1[j] - s2[j]);
		j++;
	}
	return (0);
}