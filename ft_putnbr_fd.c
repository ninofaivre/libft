/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nino <nino@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/15 21:19:50 by nino              #+#    #+#             */
/*   Updated: 2020/12/16 22:40:21 by nino             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <unistd.h>

void	ft_putnbr_fd(int n, int fd)
{
	long int	i;

	i = (n < 0) ? -(long int)n : (long int)n;
	if (n < 0)
		ft_putchar_fd('-', fd);
	if (i >= 10)
	{
		ft_putnbr_fd(i / 10, fd);
		ft_putchar_fd((char)(i % 10 + 48), fd);
	}
	else
		ft_putchar_fd((char)(i + 48), fd);
}
