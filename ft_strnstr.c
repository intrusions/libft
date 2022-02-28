#include "libft.h"

char	*ft_strstr(const char *s1, const char *s2, size_t len)
{
	size_t			n;
	size_t			k;
	char		*ptr;

	ptr = 0;
	n = 0;
	k = 0;
	if (s2[k] == '\0')
		return (s1);
	while (s1[n] != '\0' && (n < len))
	{
		k = 0;
		if (s1[n] == s2[k])
		{
			while (s2[k] && (s1[n + k] == s2[k]))
			{
				if (s2[k + 1] == '\0')
					return (&s1[n]);
				k++;
			}
		}
		n++;
	}
	return (ptr);
}