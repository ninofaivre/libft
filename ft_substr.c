/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nino <nino@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/08 11:51:24 by nino              #+#    #+#             */
/*   Updated: 2021/01/20 08:24:16 by nino             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char	*ft_substr(char const *str, unsigned int start, size_t len)
{
	char			*newstr;
	unsigned int	tomalloc;
	unsigned int	i;

	tomalloc = 0;
	i = 0;
	if (!str)
		return (NULL);
	if (start >= ft_strlen(str))
	{
		newstr = ft_calloc(1, 1);
		return (newstr);
	}
	while (str[start] && tomalloc < len)
	{
		start++;
		tomalloc++;
	}
	if (!(newstr = (char *)(malloc(sizeof(char) * tomalloc + 1))))
		return (NULL);
	newstr[tomalloc] = '\0';
	while (tomalloc--)
		newstr[i++] = str[start - 1 - tomalloc];
	return (newstr);
}
