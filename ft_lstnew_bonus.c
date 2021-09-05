/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nino <nino@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/03 14:44:23 by nino              #+#    #+#             */
/*   Updated: 2021/02/03 16:49:26 by nino             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

t_list	*ft_lstnew(void *content)
{
	t_list	*newlist;

	if (!(newlist = (t_list *)malloc(sizeof(newlist))))
		return ((t_list *)NULL);
	newlist->content = content;
	newlist->next = NULL;
	return (newlist);
}
