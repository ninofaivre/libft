/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nino <nino@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/30 01:39:10 by nino              #+#    #+#             */
/*   Updated: 2021/01/09 19:54:03 by nino             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(char const *str1, char const *str2, size_t n)
{
	unsigned char	*ptr_str1;
	unsigned char	*ptr_str2;
	int				i;

	ptr_str1 = (unsigned char *)str1;
	ptr_str2 = (unsigned char *)str2;
	i = 0;
	if (!n)
		return (0);
	while (--n && ptr_str1[i] == ptr_str2[i] && ptr_str1[i] &&
	ptr_str2[i])
		i++;
	return ((int)(ptr_str1[i] - ptr_str2[i]));
}
