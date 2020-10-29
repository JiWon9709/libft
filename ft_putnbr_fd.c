/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jyou <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/29 17:41:00 by jyou              #+#    #+#             */
/*   Updated: 2020/10/29 18:49:13 by jyou             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <unistd.h>

void		ft_putnbr_fd(int n, int fd)
{
	long	nn;

	nn = n;
	if (nn < 0)
	{
		nn *= -1;
		ft_putchar_fd('-', fd);
	}
	if (nn <= 9)
		ft_putchar_fd(nn + '0', fd);
	else
	{
		ft_putnbr_fd(nn / 10, fd);
		ft_putnbr_fd(nn % 10, fd);
	}
}
