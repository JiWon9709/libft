/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jyou <jyou@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/10 14:10:02 by jyou              #+#    #+#             */
/*   Updated: 2020/10/15 15:49:03 by jyou             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	d;
	size_t	s;

	i = 0;
	d = ft_strlen(dst);
	s = ft_strlen(src);
	if ((!dst && !src) || !size)
		return (0);
	while (i < size && d + i + 1 < size)
	{
		*(dst + d + i + 1) = *(src + i);
		i++;
	}
	*(dst + i) = '\0';
	if (size >= d)
		return (d + s);
	return (d + i);
}
