#include "libft.h"

char *ft_substr(char const *s, unsigned int start, size_t len)
{
    char    *dest;
    size_t  i;

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