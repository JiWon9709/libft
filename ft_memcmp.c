/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   memcmp.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jyou <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/07 16:30:53 by jyou              #+#    #+#             */
/*   Updated: 2020/10/14 16:10:05 by jyou             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t				i;
	unsigned const char	*c1;
	unsigned const char	*c2;

	i = 0;
	c1 = s1;
	c2 = s2;
	while (i < n)
	{
		if ((*(c1 + i)) != (*(c2 + i)))
			return (*(c1 + i) - *(c2 + i));
		i++;
	}
	return (0);
}
