/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jyou <jyou@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/07 17:12:22 by jyou              #+#    #+#             */
/*   Updated: 2020/10/15 15:29:37 by jyou             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dest, const char *src, size_t len)
{
	size_t		src_len;

	src_len = ft_strlen(src);
	if (src_len < len || !len)
		return (src_len);
	ft_memcpy(dest, src, len);
	*(dest + len) = '\0';
	return (src_len);
}
