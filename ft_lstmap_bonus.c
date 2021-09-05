/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nino <nino@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/03 17:07:31 by nino              #+#    #+#             */
/*   Updated: 2021/02/03 18:03:17 by nino             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*newlist;
	t_list	*tmp;

	newlist = NULL;
	tmp = NULL;
	if (!lst || !f)
		return (NULL);
	while (lst)
	{
		if (!(tmp = ft_lstnew(f(lst->content))))
		{
			ft_lstclear(&newlist, (del));
			return (NULL);
		}
		ft_lstadd_back(&newlist, tmp);
		lst = lst->next;
	}
	return (newlist);
}
