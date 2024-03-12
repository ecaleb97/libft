#include "libft.h"

void    *ft_memset(void *b, int c, size_t len)
{
    unsigned char   *str;

    str = b;
    while (len--)
    {
        *str++ = c;
    }
    return b;
}