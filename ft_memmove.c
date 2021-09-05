/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nino <nino@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/21 18:06:36 by nino              #+#    #+#             */
/*   Updated: 2021/01/09 19:46:19 by nino             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char	*ptr_dest;
	unsigned char	*ptr_src;

	ptr_dest = (unsigned char *)dest;
	ptr_src = (unsigned char *)src;
	if (!ptr_dest && !ptr_src && n)
		return (dest);
	if (src < dest)
		while (n--)
			ptr_dest[n] = ptr_src[n];
	else
		while (n--)
			*ptr_dest++ = *ptr_src++;
	return (dest);
}
