/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jyou <jyou@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/30 01:11:53 by jyou              #+#    #+#             */
/*   Updated: 2020/10/18 18:57:24 by jyou             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *ptr, int value, size_t num)
{
	size_t				i;
	unsigned char		*c;

	c = ptr;
	i = 0;
	while (i < num)
	{
		*(c++) = value;
		i++;
	}
	return (ptr);
}
