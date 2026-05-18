/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vaugusto <vaugusto@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/17 21:40:17 by vaugusto          #+#    #+#             */
/*   Updated: 2026/05/18 17:20:34 by vaugusto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new_list;
	t_list	*new_node;
	t_list	*temp_node;

	new_list = NULL;
	while (lst != NULL)
	{
		temp_node = f(lst->content);
		new_node = ft_lstnew(temp_node);
		if (!new_node)
		{
			ft_lstclear(&new_list, del);
			free(temp_node);
			break ;
		}
		ft_lstadd_back(&new_list, new_node);
		lst = lst->next;
	}
	return (new_list);
}
