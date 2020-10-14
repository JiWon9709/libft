/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   memccpy.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jyou <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/07 15:34:39 by jyou              #+#    #+#             */
/*   Updated: 2020/10/14 15:48:24 by jyou             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dest, const void *src, int c, size_t n)
{
	unsigned char		*s;
	unsigned const char	*cc;
	size_t				i;

	s = dest;
	cc = src;
	i = 0;
	if ((!s && !cc) || !n)
		return (NULL);
	while (i < n)
	{
		if (*cc == (unsigned char)c)
		{
			*(s++) = *(cc++);
			return (dest + i + 1);
		}
		*(s++) = *(cc++);
		i++;
	}
	return (NULL);
}
