/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: envillan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/28 11:33:04 by envillan          #+#    #+#             */
/*   Updated: 2024/03/28 11:38:23 by envillan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	char		*dst_c;
	const char	*src_c;

	dst_c = (char *)dst;
	src_c = (const char *)src;
	if (dst == src || len == 0)
		return (dst);
	if (dst < src)
	{
		while (len--)
			*dst_c++ = *src_c++;
	}
	else
	{
		dst_c += len;
		src_c += len;
		while (len--)
			*--dst_c = *--src_c;
	}
	return (dst);
}
