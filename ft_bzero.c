#include "libft.h"
#include <string.h>
#include <stdio.h>

void    ft_bzero(void *s, size_t n)
{
    ft_memset(s, '\0', n);
}

int main(void)
{
    char s[5] = "Hello";
    printf("%s\n", s);
    bzero(s, 1);
    printf("%s\n", s);

    return (0);
}