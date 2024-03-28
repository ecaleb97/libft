/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: envillan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/28 11:43:57 by envillan          #+#    #+#             */
/*   Updated: 2024/03/28 11:44:01 by envillan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	j;
	size_t	total_len;

	i = 0;
	j = 0;
	while (src[j] != '\0')
		j++;
	while (dst[i] != '\0')
		i++;
	if (dstsize == 0)
		return (j);
	else if (dstsize < i)
		total_len = j + dstsize;
	else
		total_len = i + j;
	j = 0;
	while (src[j] != '\0' && i + 1 < dstsize)
	{
		dst[i] = src[j];
		i++;
		j++;
	}
	dst[i] = '\0';
	return (total_len);
}
