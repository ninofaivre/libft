/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nino <nino@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/21 18:29:15 by nino              #+#    #+#             */
/*   Updated: 2020/12/16 21:10:46 by nino             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dest, const void *src, int c, size_t n)
{
	unsigned char	*ptr_dest;
	unsigned char	*ptr_src;

	ptr_dest = (unsigned char *)dest;
	ptr_src = (unsigned char *)src;
	while (n--)
	{
		if (*ptr_src == ((unsigned char)c))
		{
			*ptr_dest = *ptr_src;
			return ((void *)(ptr_dest + 1));
		}
		*ptr_dest++ = *ptr_src++;
	}
	return (NULL);
}
