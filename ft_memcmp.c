/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nino <nino@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/30 00:29:12 by nino              #+#    #+#             */
/*   Updated: 2021/01/09 19:03:47 by nino             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(void const *str1, void const *str2, size_t n)
{
	unsigned char	*ptr_s1;
	unsigned char	*ptr_s2;
	size_t			i;

	ptr_s1 = (unsigned char *)str1;
	ptr_s2 = (unsigned char *)str2;
	i = 0;
	while (i < n)
	{
		if (ptr_s1[i] != ptr_s2[i])
			return ((int)(ptr_s1[i] - ptr_s2[i]));
		i++;
	}
	return (0);
}
