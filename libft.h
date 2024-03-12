#ifndef LIBFT_H
# define LIBFT_H

#include <stdlib.h>
#include <unistd.h>

int ft_isalpha(int c);

int ft_isdigit(int c);

int ft_isalnum(int c);

int ft_isascii(int c);

size_t ft_strlen(const char *s);

void    *ft_memset(void *b, int c, size_t len);

void    ft_bzero(void *s, size_t n);

void    *ft_memcpy(void *restrict dst, const void *restrict src, size_t n);

#endif

