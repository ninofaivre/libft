/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nino <nino@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/30 22:19:29 by nino              #+#    #+#             */
/*   Updated: 2021/01/20 09:07:50 by nino             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "stdlib.h"

static int	ft_isspace(char	const c)
{
	if (c == '\t' || c == '\n' || c == '\v' || c == '\f' || c == '\r'
	|| c == ' ')
		return (1);
	return (0);
}

int			ft_atoi(char const *s)
{
	long int	i;
	int			minus;

	i = 0;
	minus = 0;
	while (*s && ft_isspace(*s))
		s++;
	if (*s == '+')
		s++;
	else if (*s == '-')
	{
		minus++;
		s++;
	}
	while (*s >= '0' && *s <= '9' && i <= 2147483647)
		i = i * 10 + (long int)*s++ - 48;
	if (i > 2147483647 && !minus)
		return (-1);
	if (-i < -2147483648)
		return (0);
	if (minus)
		return ((int)(-i));
	return ((int)i);
}
