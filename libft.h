/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: envillan <marvin@42.fr>     			    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/12 13:33:54 by envillan          #+#    #+#             */
/*   Updated: 2024/03/12 13:35:55 by envillan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <stdlib.h>
# include <unistd.h>

int		ft_isalpha(int c);

int		ft_isdigit(int c);

int		ft_isalnum(int c);

int		ft_isascii(int c);

int		ft_toupper(int c);

int		ft_tolower(int c);

size_t	ft_strlen(const char *s);

size_t	ft_strlcpy(char *restrict dst,
			const char *restrict src,
			size_t dstsize);

size_t	ft_strlcat(char *restrict dst,
			const char *restrict src,
			size_t dstsize);

void	*ft_memset(void *b, int c, size_t len);

void	ft_bzero(void *s, size_t n);

void	*ft_memcpy(void *restrict dst, const void *restrict src, size_t n);

#endif