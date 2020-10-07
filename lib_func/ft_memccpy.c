/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   memccpy.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jyou <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/07 15:34:39 by jyou              #+#    #+#             */
/*   Updated: 2020/10/07 15:44:48 by jyou             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

void	*ft_memccpy(void *dest, const void *src, int c, size_t n)
{
	char		*c;
	const char	*cc;
	size_t		i;

	c = dest;
	cc = src;
	i = 0;
	while (i < n)
	{
		*(c++) = *(cc++);
		if (*cc == c)
		{
			*(c++) = *(cc++);
			return (dest);
		}
	}
	return (NULL);
}
