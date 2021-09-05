/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nino <nino@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/30 01:31:35 by nino              #+#    #+#             */
/*   Updated: 2021/01/09 19:12:22 by nino             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(char const *str, int c)
{
	int	i;

	i = ft_strlen(str);
	if ((char)c == '\0')
		return ((char *)(&str[(int)ft_strlen(str)]));
	while (i--)
		if (str[i] == (char)c)
			return ((char *)(&str[i]));
	return (NULL);
}
