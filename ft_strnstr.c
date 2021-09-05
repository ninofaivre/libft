/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nino <nino@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/30 20:47:07 by nino              #+#    #+#             */
/*   Updated: 2021/01/07 18:22:30 by nino             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(char const *str1, char const *str2, size_t n)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	if (!*str2)
		return ((char *)str1);
	while (str1[i] && str2[j] && (size_t)i < n)
	{
		while (str1[i] != str2[j] && str1[i] && (size_t)i < n)
			i++;
		while (str1[i] == str2[j] && (size_t)i < n)
		{
			i++;
			j++;
			if (!str2[j])
				return ((char *)(&str1[i - j]));
		}
		j = 0;
	}
	return (NULL);
}
