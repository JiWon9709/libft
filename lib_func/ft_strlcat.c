/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jyou <jyou@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/10 14:10:02 by jyou              #+#    #+#             */
/*   Updated: 2020/10/10 14:40:11 by jyou             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	d;
	size_t	s;

	i = 0;
	d = 0;
	s = 0;
	while (*(dst + d))
		d++;
	while (*(src + s))
		s++;
	while (i < size)
	{
		*(dst + i) = *(src + i);
		i++;
	}
	*(dst + i) = '\0';
	if (size >= d)
		return (
	return (i);
}
