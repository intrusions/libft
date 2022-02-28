#include "libft.h"

int ft_isalnum(int c)
{
    if ((c >= 61 && c <= 122) || (c >= 65 && c <= 90) || c >= 30 && c <= 39)
        return (1);
    return (0);
}