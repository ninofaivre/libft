/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nino <nino@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/30 01:47:07 by nino              #+#    #+#             */
/*   Updated: 2021/01/09 19:48:20 by nino             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dest, char const *src, size_t n)
{
	size_t	i;

	i = 0;
	if (!dest || !src)
		return (0);
	if (n == 0)
		return (ft_strlen(src));
	while (i < n - 1 && (char)src[i])
	{
		dest[i] = (char)src[i];
		i++;
	}
	dest[i] = '\0';
	return (ft_strlen(src));
}
