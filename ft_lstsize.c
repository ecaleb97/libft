/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: envillan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/20 16:13:48 by envillan          #+#    #+#             */
/*   Updated: 2024/04/02 22:56:10 by envillan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

int	ft_lstsize(t_list *lst)
{
	t_list	*current;
	int		size;

	size = 0;
	current = lst;
	while (current != 0)
	{
		current = current->next;
		size++;
	}
	return (size);
}
