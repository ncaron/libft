/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Niko <niko.caron90@gmail.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/07 16:11:21 by Niko              #+#    #+#             */
/*   Updated: 2016/11/07 19:39:41 by Niko             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

t_list	*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem))
{
	t_list *list;
	t_list *first;

	if (!lst)
		return (NULL);
	first = f(lst);
	list = first;
	while (lst->next)
	{
		lst = lst->next;
		list->next = f(lst);
		if (list->next == NULL)
			return (NULL);
		list = list->next;
	}
	return (first);
}
