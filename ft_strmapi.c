/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nino <nino@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/15 20:47:22 by nino              #+#    #+#             */
/*   Updated: 2020/12/16 23:01:49 by nino             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char	*ft_strmapi(char const *str, char (*f)(unsigned int, char))
{
	unsigned int	i;
	char			*str_return;

	i = 0;
	if (!str || !f)
		return (NULL);
	if (!(str_return = (char *)malloc(sizeof(char) * (ft_strlen(str) + 1))))
		return (NULL);
	while (str[i])
	{
		str_return[i] = f(i, str[i]);
		i++;
	}
	str_return[i] = '\0';
	return (str_return);
}
