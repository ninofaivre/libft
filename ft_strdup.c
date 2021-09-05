/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nino <nino@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/03 02:24:46 by nino              #+#    #+#             */
/*   Updated: 2020/12/18 23:32:45 by nino             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char	*ft_strdup(char const *str)
{
	int		str_len;
	int		i;
	char	*cpy;

	str_len = (int)ft_strlen(str);
	i = -1;
	if (!(cpy = (char *)(malloc(sizeof(char) * (str_len + 1)))))
		return (NULL);
	cpy[str_len] = '\0';
	while (++i < str_len)
		cpy[i] = str[i];
	return (cpy);
}
