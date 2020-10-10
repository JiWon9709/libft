/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   memccpy.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jyou <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/07 15:34:39 by jyou              #+#    #+#             */
/*   Updated: 2020/10/10 21:16:45 by jyou             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dest, const void *src, int c, size_t n)
{
	char		*s;
	const char	*cc;
	size_t		i;

	s = dest;
	cc = src;
	i = 0;
	while (i < n)
	{
		*(s++) = *(cc++);
		if (*cc == c)
		{
			*(s++) = *(cc++);
			return (dest);
		}
	}
	return (NULL);
}
