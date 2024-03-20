/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: envillan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/20 15:59:20 by envillan          #+#    #+#             */
/*   Updated: 2024/03/20 18:49:49 by envillan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	t_list	*new_node;
	t_list	*new_value;

	new_value = new_node->content;
	new_node = (t_list *) malloc(sizeof(t_list));
	new_node->content = new_value;
	new_node->next = *lst;
	*lst = new_node;
}
