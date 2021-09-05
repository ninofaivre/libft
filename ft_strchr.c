/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nino <nino@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/30 01:20:51 by nino              #+#    #+#             */
/*   Updated: 2021/01/09 19:09:04 by nino             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(char const *str, int c)
{
	int	i;

	i = 0;
	if ((char)c == '\0')
		return ((char *)(&str[(int)ft_strlen(str)]));
	while (str[i])
		if (str[i++] == (char)c)
			return ((char *)(&str[i - 1]));
	return (NULL);
}
