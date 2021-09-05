/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nino <nino@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/15 19:53:31 by nino              #+#    #+#             */
/*   Updated: 2021/01/06 02:17:16 by nino             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char	*ft_itoa(int n)
{
	long int	i;
	long int	i2;
	int			tomalloc;
	char		*str;

	i = (n >= 0) ? (long int)n : -(long int)n;
	i2 = i * 10;
	tomalloc = (n > 0) ? 0 : 1;
	while (i2 /= 10)
		tomalloc++;
	if (!(str = (char *)malloc(sizeof(char) * (tomalloc + 1))))
		return (NULL);
	str[tomalloc] = '\0';
	while (tomalloc--)
	{
		if (n < 0 && tomalloc == 0)
		{
			str[0] = '-';
			break ;
		}
		str[tomalloc] = (char)((i % 10) + 48);
		i /= 10;
	}
	return (str);
}
