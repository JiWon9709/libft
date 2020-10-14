/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jyou <jyou@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/30 20:16:21 by jyou              #+#    #+#             */
/*   Updated: 2020/10/14 14:51:56 by jyou             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *ptr, size_t size)
{
	size_t	i;
	char	*c;

	c = ptr;
	i = 0;
	while (i < size)
	{
		*(c + i) = 0x00;
		i++;
	}
}
