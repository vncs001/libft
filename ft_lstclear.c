/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vaugusto <vaugusto@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/17 12:30:49 by vaugusto          #+#    #+#             */
/*   Updated: 2026/05/17 21:27:31 by vaugusto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list	*temp;
	t_list	*temp2;

	temp = *lst;
	while (temp != NULL)
	{
		temp2 = temp->next;
		ft_lstdelone(temp, del);
		temp = temp2;
	}
	*lst = NULL;
}
