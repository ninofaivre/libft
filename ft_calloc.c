/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nino <nino@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/03 02:11:14 by nino              #+#    #+#             */
/*   Updated: 2021/01/09 18:11:39 by nino             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*toalloc;

	if (!(toalloc = (void *)(malloc(nmemb * size))))
		return (NULL);
	ft_bzero(toalloc, (nmemb * size));
	return (toalloc);
}
