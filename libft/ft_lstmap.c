/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjabane <mjabane@student.42wolfsburg.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/05 17:53:11 by mjabane           #+#    #+#             */
/*   Updated: 2022/03/24 09:59:35 by mjabane          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new;
	t_list	*list;

	if (!lst || !f)
		return (NULL);
	list = NULL;
	while (lst)
	{
		new = ft_lstnew((*f)(lst->content));
		if (!new)
			ft_lstclear(&list, (*del));
		ft_lstadd_back(&list, new);
		lst = lst->next;
	}
	return (list);
}
