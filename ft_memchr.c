/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nino <nino@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/30 00:08:38 by nino              #+#    #+#             */
/*   Updated: 2021/01/09 19:00:49 by nino             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(void const *str, int c, size_t n)
{
	unsigned char	*ptr_str;

	ptr_str = (unsigned char *)str;
	while (n--)
		if (*ptr_str++ == ((unsigned char)c))
			return ((void *)(ptr_str - 1));
	return (NULL);
}
