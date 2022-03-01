#include "stdlib.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n)
	{
		(*(unsigned char *)(dest + i)) = (*(unsigned char *)(src + i));
		i++;
	}
	return ((unsigned char *)dest);
}
