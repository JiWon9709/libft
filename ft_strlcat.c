/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jyou <jyou@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/10 14:10:02 by jyou              #+#    #+#             */
/*   Updated: 2020/10/18 20:55:25 by jyou             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	d;
	size_t	s;

	i = 0;
	d = ft_strlen(dst);
	s = ft_strlen(src);
	if (dstsize >= d)
	{
		while (d + i + 1 < dstsize && *(src + i) != '\0')
		{
			*(dst + d + i) = *(src + i);
			i++;
		}
		*(dst + d + i) = '\0';
		return (d + s);
	}
	return (s + dstsize);
}
