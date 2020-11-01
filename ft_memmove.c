/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   memmove.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jyou <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/07 15:39:50 by jyou              #+#    #+#             */
/*   Updated: 2020/11/01 17:29:38 by jyou             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	char		*c;
	const char	*cc;
	size_t		i;

	c = dest;
	cc = src;
	i = 0;
	if ((!c && !cc) || !n)
		return (dest);
	if (dest > src)
	{
		c += n - 1;
		cc += n - 1;
		while (n-- > 0)
			*(c--) = *(cc--);
	}
	else
	{
		while (i < n)
		{
			*(c + i) = *(cc + i);
			i++;
		}
	}
	return (dest);
}
