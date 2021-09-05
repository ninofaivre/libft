/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nino <nino@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/30 20:37:06 by nino              #+#    #+#             */
/*   Updated: 2021/01/20 09:15:18 by nino             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t n)
{
	size_t i;
	size_t j;

	i = 0;
	if (n == 0)
		return (ft_strlen(src));
	while (dest[i] != '\0' && i < n)
		i++;
	j = i;
	while (src[i - j] != '\0' && i < n - 1)
	{
		dest[i] = src[i - j];
		i++;
	}
	if (j < n)
		dest[i] = '\0';
	return (j + ft_strlen(src));
}
