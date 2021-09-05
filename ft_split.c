/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nino <nino@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/14 13:14:12 by nino              #+#    #+#             */
/*   Updated: 2021/01/20 08:19:28 by nino             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

static char	**freesplit(char **split)
{
	int	i;

	i = 0;
	while (split[i])
	{
		free(split[i]);
		i++;
	}
	free(split);
	return (NULL);
}

static int	countwl(char const *str, char c, int w_or_l)
{
	int		words;
	int		letters;
	char	*ptr_str;

	words = 0;
	if (!str)
		return (words);
	ptr_str = (char *)str;
	while (*ptr_str)
	{
		letters = 0;
		while (*ptr_str == c)
			ptr_str++;
		while (*ptr_str && *ptr_str++ != c)
			letters++;
		words = (letters) ? (words + 1) : words;
		if (w_or_l == 1)
			return (letters);
	}
	return (words);
}

char		**ft_split(char const *str, char c)
{
	int		i;
	int		j;
	int		words;
	char	**str_return;

	i = 0;
	j = 0;
	words = 0;
	if (!str)
		return (NULL);
	words = countwl(str, c, 0);
	if (!(str_return = (char **)malloc(sizeof(char *) * (words + 1))))
		return (NULL);
	str_return[words] = NULL;
	while (words--)
	{
		while ((char)str[j] == c)
			j++;
		if (!(str_return[i] = (char *)malloc(countwl(&str[j], c, 1) + 1)))
			return (freesplit(str_return));
		ft_strlcpy(str_return[i], &str[j], countwl(&str[j], c, 1) + 1);
		j += countwl(&str[j], c, 1);
		i++;
	}
	return (&*str_return);
}
