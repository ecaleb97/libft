/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: envillan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/28 13:09:07 by envillan          #+#    #+#             */
/*   Updated: 2024/03/28 13:10:57 by envillan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_count_words(char const *s, char c)
{
	size_t	count;
	size_t	i;

	count = 0;
	i = 0;
	while (s[i])
	{
		if (s[i] != c)
		{
			count++;
			while (s[i] && s[i] != c)
				i++;
		}
		else
			i++;
	}
	return (count);
}

static char	*ft_get_word(char const *s, char c, size_t *i)
{
	size_t	start;
	size_t	end;
	char	*word;

	start = *i;
	while (s[*i] && s[*i] != c)
		(*i)++;
	end = *i;
	word = ft_substr(s, start, end - start);
	return (word);
}

char	**ft_split(char const *s, char c)
{
	char	**tab;
	size_t	i;
	size_t	j;

	if (!s)
		return (NULL);
	tab = (char **)malloc(sizeof(char *) * (ft_count_words(s, c) + 1));
	if (!tab)
		return (NULL);
	i = 0;
	j = 0;
	while (s[i])
	{
		if (s[i] != c)
		{
			tab[j] = ft_get_word(s, c, &i);
			j++;
		}
		else
			i++;
	}
	tab[j] = NULL;
	return (tab);
}
