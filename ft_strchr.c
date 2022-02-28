#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	int			i;

	i = 0;
	if (c == '\0')
		return (s);
	while (s[i] != '\0')
	{
		if (s[i] == c)
			return (&s[i]);
		i++;
	}
	return (NULL);
}