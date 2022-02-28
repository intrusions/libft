#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int			i;
	char		*last:

	i = 0;
	*last = NULL;
	if (c == '\0')
		return (s);
	while (s[i] != '\0')
	{
		if (s[i] == c)
			last = &s[i]);
		i++;
	}
	if (last)
		return (last);
	return (NULL);
}