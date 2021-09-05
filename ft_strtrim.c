/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nino <nino@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/14 12:15:35 by nino              #+#    #+#             */
/*   Updated: 2021/01/05 22:56:25 by nino             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

static int	isset(char const c, char const *set)
{
	while (*set && c != *set)
		set++;
	return (c == *set);
}

char		*ft_strtrim(char const *str, char const *set)
{
	int		tomalloc;
	int		start;
	char	*str_return;

	if (!str || !set)
		return (NULL);
	tomalloc = (int)(ft_strlen(str));
	start = 0;
	while (isset(str[start], set))
		start++;
	while (isset(str[tomalloc - 1], set))
		tomalloc--;
	tomalloc -= start;
	if (tomalloc <= 0)
	{
		str_return = ft_calloc(1, 1);
		return (str_return);
	}
	if (!(str_return = (char *)(malloc(sizeof(char) * (tomalloc + 1)))))
		return (NULL);
	str_return[tomalloc] = '\0';
	while (tomalloc--)
		str_return[tomalloc] = str[start + tomalloc];
	return (str_return);
}
