#include "stdlib.h"

void    *ft_memmove(void *dest, const void *src, size_t n)
{
    size_t  i;
    void    *tmp;

    i = 0;
    while (i < n)
    {
        (*(unsigned char *)(tmp + i)) = (*(unsigned char *)(src + i));
        i++;
    }
    i = 0;
    while (i < n)
    {
        (*(unsigned char *)(dest + i)) = (*(unsigned char *)(tmp + i));
        i++;
    }
    return ((unsigned char *)dest);
}