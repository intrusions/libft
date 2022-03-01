#include "libft.h"

void    *ft_calloc(size_t nmemb, size_t size)
{
    void    *dest;

    dest = (void *)malloc(sizeof(size * nmemb));
    if (!dest)
       return (NULL);
    ft_bzero(dest, nmemb);
    return (dest);
}