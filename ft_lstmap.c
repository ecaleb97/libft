/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: envillan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/28 12:48:56 by envillan          #+#    #+#             */
/*   Updated: 2024/03/28 13:26:30 by envillan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	void	lst_clear(t_list **lst, void (*del)(void *))
{
	if (!lst || !del || !(*lst))
		return ;
	lst_clear(&(*lst)->next, del);
	(del)((*lst)->content);
	free(*lst);
	*lst = 0;
}

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new_lst;
	t_list	*new_elem;
	void	*content;

	if (!lst || !f)
		return (0);
	new_lst = 0;
	while (lst)
	{
		content = (*f)(lst->content);
		new_elem = ft_lstnew((*f)(lst->content));
		if (!new_elem)
		{
			del(content);
			lst_clear(&new_lst, del);
			return (0);
		}
		ft_lstadd_back(&new_lst, new_elem);
		lst = lst->next;
	}
	return (new_lst);
}
