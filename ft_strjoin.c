/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nino <nino@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/08 16:02:42 by nino              #+#    #+#             */
/*   Updated: 2020/12/17 21:26:16 by nino             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char	*ft_strjoin(char const *s1, char const *s2)
{
	unsigned int	i;
	char			*newstr;

	if (!s1 || !s2)
		return (NULL);
	i = 0;
	newstr = (char *)malloc(sizeof(char) * (ft_strlen(s1) + ft_strlen(s2)) + 1);
	if (!newstr)
		return (NULL);
	while (s1[i])
	{
		newstr[i] = s1[i];
		i++;
	}
	while (s2[i - ft_strlen(s1)])
	{
		newstr[i] = s2[i - ft_strlen(s1)];
		i++;
	}
	newstr[i] = '\0';
	return (newstr);
}
